#include <iostream>
#include <fstream>
#include <random>
#include <ctime>
#include "data.txt"
int compare(const void * x1, const void * x2)   // функция сравнения элементов массива
{
    return ( *(int*)x1 - *(int*)x2 );              // если результат вычитания равен 0, то числа равны, < 0: x1 < x2; > 0: x1 > x2
}
void Qsort(int a[]){

}
int main() {
    int INT = INT32_MAX/100;std::ofstream fout;char filename[30]="data.txt";fout.open(filename,std::ios_base::out);
    std::mt19937_64 gen(time(0));
    int ** a;a=new int *[100];
    for (int i=0,j=INT ;i<100;i++,j+=INT){
        a[i] = new int[1000];std::uniform_int_distribution<> uid(0,j);
        for (int b=0;b<1000;b++){
            a[i][b]=uid(gen);
        }
        qsort(a[i],1000,sizeof(int),compare);
        for (int b=0;b<1000;b++){
            fout <<a[i][b]<<std::endl;
        }
    }
    fout<< "fuck";
    fout.close();
}
