#include <iostream>
#include <cstring> // для strcmp() и т.п.
using namespace std;
void swap(char **a,char **b);
void order(char**, char**); // прототип
const int DAYS = 7; // число указателей на массив
int main()
{
    void bsort(char**, int);// прототип
    // массив указателей на char
    char*arrptrs[DAYS] = {"Воскресенье ", "Понедельник", "Вторник ",
                          "Среда ", "Четверг ", "Пятница ", "Суббота " };
    char* week[7];*week="Monday";*(week+1)="Tuesday";*(week+2)="Wednesday";*(week+3)="Thursday";*(week+4)="Friday ";
    *(week+5)="Saturday ";*(week+6)="Sunday ";
    cout << "\nНеупорядоченный:\n ";
    for(int j = 0; j < DAYS; j++) // вывести неупорядоченные
        // строки
        cout << *(week + j) << endl;
    order((week+5),(week+4));swap(week+4,week+5);
    //bsort(week, DAYS); // сортировать строки
    cout << "\nУпорядоченная:\n ";
    for(int j = 0; j < DAYS; j++) // вывести сортированные строки
        cout << *(week + j) << endl;
    return 0;
}
//---------------------------------------------------------
void bsort(char**pp, int n) // сортировать указатели на строки
{

    int j, k; // индексы массива
    for(j = 0; j < n - 1; j++) // внешний цикл
        for(k = j + 1; k < n; k++)// внутренний цикл
            order(pp + j, pp + k); // упорядочить содержимое
    // указателей
}
//---------------------------------------------------------
void order(char**pp1, char**pp2) // сортирует два указателя
{ // если в первом строка больше
    if(strcmp(*pp1, *pp2) > 0)// чем во втором
    {
        char*tempptr =*pp1; // обменять указатели
        *pp1 =*pp2;
        *pp2 = tempptr;
    }
}
void swap(char **a,char **b){
    char *c=*a;*a=*b;*b=c;
}

