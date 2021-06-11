// Example program
#include <cstring>
#include <string>
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

#include <string>
#define PATH_MAX_LENGTH 255
struct UI {
    static void showInfo();
    static void processFileArg(std::string fileName);
    static void processNoArgs();
    static void processValueArgs(char* valueArgs[], int valueArgsSize);
    static void log(std::string message);
    static void showValues(double* values, int valuesSize);
};

void init();
void processArgs(int argc, char* argv[]);

int main(int argc, char* argv[])
{
    init();
    processArgs(argc, argv);
    return 0;
}

std::string R::subject = "Структуры и алгоритмы компьютерной обработки данных";
std::string R::theme = "Реализация турнирной сортировки при помощи бинарного дерева";
std::string R::group = "Группа 4211";
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
std::string R::wrongArgs = "непоходящие аргументы";
std::string R::wrongArgValue = "неподходящие значения";
std::string R::canNotOpenFile = "не удалось открыть файл";
std::string R::canNotWriteFile = "не удалось записать значения в файл";
std::string R::sortedFilePrefix = "sorted_";

#include <iostream>
void init() {
#if defined(_WIN32) || defined(_WIN64)
    setlocale(LC_ALL, "Russian");
#endif
}

void processArgs(int argc, char* argv[]) {
    if (argc == 1) {
        UI::processNoArgs();
    }
    else if (argc == 2 && strcmp(argv[1], "-i") == 0) {
        UI::showInfo();
    }
    else if (argc > 2 && strcmp(argv[1], "-v") == 0) {
        UI::processValueArgs(argv + 2, argc - 2);
    }
    else if (argc == 3 && strcmp(argv[1], "-f") == 0) {
        UI::processFileArg(argv[2]);
    }
    else {
        UI::log(R::wrongArgs);
    }
}

#include <vector>
struct FileManager {
    static void readFileValues(std::string fileName, std::vector<std::string>& fileValuesBuff);
    static void saveValuesInFile(std::string fileName, double* values, int valuesSize);
};

#include <algorithm>
struct Domain {
    static void tsort(double*& values, int valuesSize);
    class Tourney;
};

#include <sstream>
#include <vector>
void UI::showInfo() {
    log(R::greeting);
    log("");
}
void UI::processFileArg(std::string fileName) {
    std::vector<std::string> fileValues;
    FileManager::readFileValues(fileName, fileValues);

    double* values = new double[fileValues.size()];
    for (int i = 0; i < fileValues.size(); i++) {
        char* e;
        errno = 0;
        values[i] = std::strtod(fileValues[i].c_str(), &e);
        if (*e != '\0' || errno != 0) {
            log(R::wrongArgValue);
            return;
        }
    }

    if (fileValues.size() == 0) {
        return;
    }
    Domain::tsort(values, fileValues.size());
    showValues(values, fileValues.size());
    FileManager::saveValuesInFile(R::sortedFilePrefix + fileName, values, fileValues.size());
}
void UI::processNoArgs() {
    showInfo();
    log(R::enterFileName);
    std::string fileName;
    std::cin >> fileName;
    processFileArg(fileName);
}

void UI::processValueArgs(char* valueArgs[], int valueArgsSize) {
    double* values = new double[valueArgsSize];

    for (int i = 0; i < valueArgsSize; i++) {
        char* e;
        errno = 0;
        values[i] = std::strtod(valueArgs[i], &e);
        if (*e != '\0' || errno != 0) {
            log(R::wrongArgValue);
            return;
        }
    }
    Domain::tsort(values, valueArgsSize);
    showValues(values, valueArgsSize);
}
void UI::log(std::string message) {
    std::cout << message << std::endl;
}
void UI::showValues(double* values, int valuesSize) {
    log(R::resultIs);
    for (int i = 0; i < valuesSize; i++) {
        std::cout << values[i] << std::endl;
    }
}

#include <fstream>
void FileManager::readFileValues(std::string fileName, std::vector<std::string>& fileValuesBuff) {
    std::ifstream inputFile(fileName);
    if (!inputFile.good()) {
        UI::log(R::canNotOpenFile);
        return;
    }
    std::string fileValue;
    while (inputFile >> fileValue) {
        fileValuesBuff.push_back(fileValue);
    }
    inputFile.close();
}
void FileManager::saveValuesInFile(std::string fileName, double* values, int valuesSize) {
    std::ofstream outputFile(fileName);
    if (!outputFile.good()) {
        UI::log("не удалось записать значения в файл");
        return;
    }
    for (int i = 0; i < valuesSize; i++) {
        outputFile << values[i] << "\n";
    }
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
    void setRound(int root, int winner, int winners, int losers) {
        rounds[root] = winner;
        rounds[root + 1] = winners;
        rounds[root + 2] = losers;
    }
    int mkRound(int first, int last, int root) {
        int firstWinner = getPlayer(first);
        int lastWinner = getPlayer(last);
        if (arr[firstWinner] <= arr[lastWinner]) {
            setRound(root, firstWinner, first, last);
        }
        else {
            setRound(root, lastWinner, last, first);
        }
        return root;
    }
    int reset(int i, int k, int root) {
        if (i == k) {
            return mkPlayer(i);
        }
        int j = (i + k) / 2;
        return mkRound(reset(i, j, 2 * root), reset(j + 1, k, 2 * root + 3), root);
    }
public:
    Tourney(double* values, int valuesSize) {
        arr = values;
        rounds = new int[6 * valuesSize];
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
    int rebuild(int root) {
        if (isPlayer(getWinners(root))) {
            return getLosers(root);
        }
        else {
            setWinners(root, rebuild(getWinners(root)));
            if (arr[getPlayer(getLosers(root))] < arr[getPlayer(getWinners(root))]) {
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

void Domain::tsort(double*& values, int valuesSize) {
    Domain::Tourney tourney = Domain::Tourney(values, valuesSize);
    double* copy = new double[valuesSize];
    for (int i = 0; i < valuesSize; i++) {
        copy[i] = tourney.pop();
    }
    delete[] values;
    values = copy;
}

