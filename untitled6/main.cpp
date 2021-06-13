#include <string>

// Для простоты редактирования значений, все строки 
// вынесенны и сгрупированны в одной стркутуре
struct R {
    static std::string subject;
    static std::string theme;
    static std::string group;
    static std::string name;
    static std::string faculty;
    static std::string greeting;
    static std::string enterFileName;
    static std::string resultIs;
    static std::string wrongArgs;
    static std::string wrongArgValue;
    static std::string canNotOpenFile;
    static std::string canNotWriteFile;
    static std::string sortedFilePrefix;
};
#include <cstring>
#include <string>
#define PATH_MAX_LENGTH 255
// Все функции отвечающее за вывод и получение 
// данных от пользователя сгрупированны в структуре UI
struct UI {
    // Выводит информацию с титульного листа курсовой работы
    static void showInfo();
    // Вызывается если было переданно имя файла со значениями
    static void processFileArg(std::string fileName);
    // Вызывается если не было переданно источника со значениями
    static void processNoArgs();
    // Вызывается если были передан массив значений
    static void processValueArgs(char* valueArgs[], int valueArgsSize);
    // Выводит переданное сообщение
    static void log(std::string message);
    // Выводит отсортированные значения 
    static void showValues(double* values, int valuesSize);
};

// Подготавливает ресурсы для работы программы
void init();
// Обрабатывает переданные аргументы
void processArgs(int argc, char* argv[]);

// Точка входа в программу
int main(int argc, char* argv[]) // колличество аргументов и массив аргументов
{
    init();
    processArgs(argc, argv);
    return 0;
}

// Инициализация строк
std::string R::subject = "Структуры и алгоритмы компьютерной обработки данных";
std::string R::theme = "Реализация турнирной сортировки при помощи бинарного дерева";
std::string R::group = "4211";
std::string R::name = "Ипполитов Михаил Александрович";
std::string R::faculty = "Институт математики, информационных систем и цифровой экономики";
std::string R::greeting = "КУРСОВАЯ РАБОТА\nпо дисциплине \"" + subject + "\"\n" +
                          "на тему \"" + theme + "\"\n\n" +
                          "Выполнил\n"
                          "обучающийся группы " + group + "\n" +
                          "очной формы обучения\n" +
                          faculty + "\n" +
                          name;
std::string R::enterFileName = "имя файла со значениями:";
std::string R::resultIs = "отсортированные значения:";
std::string R::wrongArgs = "неподходящие аргументы";
std::string R::wrongArgValue = "неподходящие значения";
std::string R::canNotOpenFile = "не удалось открыть файл";
std::string R::canNotWriteFile = "не удалось записать значения в файл";
std::string R::sortedFilePrefix = "sorted_";

// Подготовка ресурсов для работы программы, 
// заключается в установке языка консоли, 
// в том случает если программа скомпилированна для Windows 
#include <iostream>
void init() {
#if defined(_WIN32) || defined(_WIN64)
    setlocale(LC_ALL, "Russian");
#endif
}

void processArgs(int argc, char* argv[]) {
    // Если аргумент один, то это означет что после имени программы не было аргументов
    if (argc == 1) {
        UI::processNoArgs();
    }
        // Если аргументов два, и после имени программы передно "-i", то вывети информацию о программе
    else if (argc == 2 && strcmp(argv[1], "-i") == 0) {
        UI::showInfo();
    }
        // Если аргументов больше двух, то после имени программы может быть переданно "-v"
        // за которым следубт значения для сортировки. Если это так то обрабатываем эти значения
    else if (argc > 2 && strcmp(argv[1], "-v") == 0) {
        UI::processValueArgs(argv + 2, argc - 2);
    }
        // Если аргументов три и после имени программы передано "-f",
        // то третий аргумент должен быть именем файла со значениями
    else if (argc == 3 && strcmp(argv[1], "-f") == 0) {
        UI::processFileArg(argv[2]);
    }
        // Если после имени программы были переданны аргументы
        // не совпадающие с выше описанные случаями, то выводим сообщение
        // в котором сообщается что переданные аргументы не могут быть обрабоанны программой
    else {
        UI::log(R::wrongArgs);
    }
}

#include <vector>
// Все функции отвечабщие за работу с файлами сгрупированны в структуре FileManager
struct FileManager {
    // Записывает занчения из файла с именем fileName в буффер fileValuesBuff
    static void readFileValues(std::string fileName, std::vector<std::string>& fileValuesBuff);
    // Сохраняет массив значений values размером valuesSize в файл с именем fileName
    static void saveValuesInFile(std::string fileName, double* values, int valuesSize);
};

// Все функции отвечающие за предметную часть сгрупированны в структуре Domain
#include <algorithm>
struct Domain {
    // Сортрует значения в массиве values размером valuesSize
    static void tsort(double*& values, int valuesSize);
    // Класс используемый для турнирной сортировки
    class Tourney;
};

#include <sstream>
#include <vector>
void UI::showInfo() {
    // Выводим информацию о программе
    log(R::greeting);
    // Выводим пустую строку, 
    // чтобы отделить информацию о программе от дальнейших выводов
    log("");
}
void UI::processFileArg(std::string fileName) {
    // Буффер в который записываются значения из файла
    std::vector<std::string> fileValues;
    // Читаем значения из файла fileName в fileValues
    FileManager::readFileValues(fileName, fileValues);

    // Создание массива чисел для сортирвки
    double* values = new double[fileValues.size()];
    // Для каждого значения из файла
    for (int i = 0; i < fileValues.size(); i++) {
        char* e;
        errno = 0;
        // Преобразуем занчений из файла в число
        values[i] = std::strtod(fileValues[i].c_str(), &e);
        // Если значение не удалось преобразовать в число
        if (*e != '\0' || errno != 0) {
            // Сообщаем что значение нельзя обработать
            log(R::wrongArgValue);
            // завершаем функцию
            return;
        }
    }

    // Если в файле не было значений
    if (fileValues.size() == 0) {
        // Завершаем функцию
        return;
    }

    // Если выполнение программы дошло жо этого места, 
    // то в values указывает на массив с числами для сортировки

    // Сортируем массив values
    Domain::tsort(values, fileValues.size());
    // Выводим отсортированный массив values
    showValues(values, fileValues.size());
    // Сохраняем отсортированные значения массива в файл c именем префикс+имя исходного файла
    FileManager::saveValuesInFile(R::sortedFilePrefix + fileName, values, fileValues.size());
}
void UI::processNoArgs() {
    // Отображаем информацию о программе
    showInfo();
    // Просим пользователя ввести имя файла
    log(R::enterFileName);
    // Читаем введённое значение в fileName
    std::string fileName;
    std::cin >> fileName;
    // Обрабатываем вверённое значение как имя файла
    processFileArg(fileName);
}

void UI::processValueArgs(char* valueArgs[], int valueArgsSize) {
    // Создание массива в который полижим числа для сортировки
    double* values = new double[valueArgsSize];

    // Каждое переданное значение
    for (int i = 0; i < valueArgsSize; i++) {
        char* e;
        errno = 0;
        // Преобразуем переданное значение в число
        values[i] = std::strtod(valueArgs[i], &e);
        // Если значение не удалось преобразовать в число
        if (*e != '\0' || errno != 0) {
            // Сообщаем что значение нельзя обработать
            log(R::wrongArgValue);
            // завершаем функцию
            return;
        }
    }
    // Сортируем массив values
    Domain::tsort(values, valueArgsSize);
    // Выводим отсортированный массив values
    showValues(values, valueArgsSize);
}
void UI::log(std::string message) {
    // Чтобы каждый раз не писать "std::cout << message << std::endl" определяем функцию "log(message)"
    std::cout << message << std::endl;
}
void UI::showValues(double* values, int valuesSize) {
    // Сообщаем что последующие значения это отсортированные значения
    log(R::resultIs);
    // Выводим массив отсортированных значений
    for (int i = 0; i < valuesSize; i++) {
        std::cout << values[i] << std::endl;
    }
}

#include <fstream>
void FileManager::readFileValues(std::string fileName, std::vector<std::string>& fileValuesBuff) {
    // Создаём входной поток из файла с именем fileName
    std::ifstream inputFile(fileName);
    // Если поток не удалось открыть
    if (!inputFile.good()) {
        // Сообщаем пользоватею что файл не удалось открыть
        UI::log(R::canNotOpenFile);
        // Завершаем функцию
        return;
    }
    // Строка в которую передаются строки файла
    std::string fileValue;
    while (inputFile >> fileValue) {
        // каждую строку из файла добавляем в fileValuesBuff
        fileValuesBuff.push_back(fileValue);
    }
    // Освобождаем ресурсы связанные с входным потоком
    inputFile.close();
}
void FileManager::saveValuesInFile(std::string fileName, double* values, int valuesSize) {
    // Создаём выходной поток для файла с именем fileName
    std::ofstream outputFile(fileName);
    // Если не удалось открыть выходной поток
    if (!outputFile.good()) {
        // Выводим сообщение о том что не удалось записать файл
        UI::log("не удалось записать значения в файл"); // забыл вынести строковый литерал, 
        // вместо него нужно было подставить R::canNotWriteFile
        // Завершаем функцию
        return;
    }
    // Передаём выходному потоку знчения из массива values
    for (int i = 0; i < valuesSize; i++) {
        outputFile << values[i] << "\n";
    }
    // Освобождаем ресурсы связанные с вызодным потоком
    outputFile.close();
}

class Domain::Tourney {
private:
    double* arr;
    int tour;
    int* rounds;
    void setWinner(int root, int winner) {
        rounds[root] = winner;
    }
    int getWinner(int root) {
        return rounds[root];
    }
    void setWinners(int root, int winners) {
        rounds[root + 1] = winners;
    }
    int getWinners(int root) {
        return rounds[root + 1];
    }
    void setLosers(int root, int losers) {
        rounds[root + 2] = losers;
    }
    int getLosers(int root) {
        return rounds[root + 2];
    }
    int getPlayer(int i) {
        return ((i <= 0) ? abs(i) : getWinner(i));
    }
    bool isPlayer(int i) {
        return i <= 0;
    }
    int mkPlayer(int i) {
        return -i;
    }
    void setRound(int root, int winner, int winners, int losers) {//
        rounds[root] = winner;
        rounds[root + 1] = winners;
        rounds[root + 2] = losers;
    }
    int mkRound(int first, int last, int root) {// сравнение
        int firstWinner = getPlayer(first);// сравнение
        int lastWinner = getPlayer(last);// сравнение
        if (arr[firstWinner] <= arr[lastWinner]) { // сравнение (само сравнение) победитель меньше
            setRound(root, firstWinner, first, last);// определение
        }// сравнение
        else {// сравнение
            setRound(root, lastWinner, last, first);// сравнение
        }// сравнение
        return root;// сравнение
    }
    int reset(int i, int k, int root) {// симулируется работа массива как дерева , i и k - листья которые нужно сравнить ,  root целевой номер куда нужно положить победителя
        if (i == k) {
            return mkPlayer(i);
        }
        int j = (i + k) / 2;
        return mkRound(reset(i, j, 2 * root), reset(j + 1, k, 2 * root + 3), root);
    }
public:
    Tourney(double* values, int valuesSize) {
        arr = values; // входной массив
        rounds = new int[6 * valuesSize]; // rounds - сортирующие дерево здесь инициализируется количество узлов дерева
        tour = reset(0, valuesSize - 1, 3);
    }
    ~Tourney() {
        delete[] rounds;
    }
    double pop() {
        double result = arr[getPlayer(tour)];
        tour = (isPlayer(tour)) ? 0 : rebuild(tour);
        return result;
    }
    int rebuild(int root) {//сравнение номер 2
        if (isPlayer(getWinners(root))) {
            return getLosers(root);
        }
        else {
            setWinners(root, rebuild(getWinners(root)));
            if (arr[getPlayer(getLosers(root))] < arr[getPlayer(getWinners(root))]) { // сравнение номер 2 player значение  которок должно стать winner или losers
                setWinner(root, getPlayer(getLosers(root)));
                int temp = getLosers(root);
                setLosers(root, getWinners(root));
                setWinners(root, temp);
            }
            else {
                setWinner(root, getPlayer(getWinners(root)));
            }
            return root;
        }
    }
};

void Domain::tsort(double*& values, int valuesSize) {// создаётся объект tourney => переход к конструктуру с определёнными параметрами, данные берутся из values , valueSize -размер
    Domain::Tourney tourney = Domain::Tourney(values, valuesSize); // массив победителей ,конечный массив
    double* copy = new double[valuesSize];// основной цикл в котором : по одному вставляются победители через метод pop
    for (int i = 0; i < valuesSize; i++) { // удаляется изначальный массив и вместо него становится массив победителей
        copy[i] = tourney.pop();
    }
    delete[] values;
    values = copy;
}