#include <iostream>
#include <string>
#include <cstring>
void asdf(int *,int *);
using namespace std;
void display(char**);
void order(char**, char **); // прототип функции
void bsort(char**, int); // прототип функции
int main()
{
    char* week[7];*week="Monday";*(week+1)="Tuesday";*(week+2)="Wednesday";*(week+3)="Thursday";*(week+4)="Friday";
    *(week+5)="Saturday";*(week+6)="Sunday";
    display(week);bsort(week,7);cout <<""""""""""""""""""""""""""""""""""""""""""<<endl;display(week);
    return 0;
}
void bsort(char ** pp, int n)
{
    int j, k; // переменные для циклов
    for(j = 0; j < n - 1; j++) // внешний цикл
        for(k = j + 1; k < n; k++) // внутренний цикл
            order(pp + j, pp + k); // сортируем два элемента
}
void order(char** pp1, char** pp2){
    if (strcmp(*pp1,*pp2)>0){
        char* asd=*pp1;*pp1=*pp2;*pp2=asd;
    }}
void display(char **a){
    for (int i=0;i<7;i++){
        cout <<*(a+i)<<endl;
    }
}
