#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////////
class person // некоторый человек
{
protected:
    string name; // имя
    float salary;
public:
    void setData() // установка имени
    {
        cout << "Enter name: "; cin >> name;
        cout <<"Enter salary :";cin >>salary;
    }
    void printData() // показ имени
    {
        cout <<"Salary : "<<salary;
        cout << endl <<"Name :"<< name<<endl;
    }
    string getName() // получение имени
    { return name; }
    float getSal(){
        return salary;
    }
};
void salsort(person **,int );
void salcmp(person  **, person ** );
///////////////////////////////////////////////////////////
int main()
{
   // person a,b;a.setData();b.setData();person *c=&a;person * d=&b;salcmp(c,d);cout <<c->getSal();
    void bsort(person**, int); // прототип функции
    person* persPtr[100]; // массив указателей на person
    int n = 0; // количество элементов в массиве
    char choice; // переменная для ввода символа
    do
    {
        persPtr[n] = new person; // создаем новый объект
        persPtr[n]->setData(); // вводим имя
        n++; // увеличиваем количество
        cout << "Continue  enter(y/n)?"; // спрашиваем, закончен ли ввод
        cin >> choice;
    }
    while(choice == 'y');
    cout << "\nUnsorted list:";
    for(int j = 0; j < n; j++) // покажем неотсортированный список
        persPtr[j]->printData();
    salsort(persPtr,n);//bsort(persPtr, n); // отсортируем указатели
    cout << "\nSorted list:";
    for(int j = 0; j < n; j++) // покажем отсортированный список
        persPtr[j]->printData();
    cout << endl;
    return 0;
}
///////////////////////////////////////////////////////////
void bsort(person** pp, int n)
{
    void order(person**, person**); // прототип функции
    int j, k; // переменные для циклов
    for(j = 0; j < n - 1; j++) // внешний цикл
        for(k = j + 1; k < n; k++) // внутренний цикл
            order(pp + j, pp + k); // сортируем два элемента
}
///////////////////////////////////////////////////////////
void order(person** pp1, person** pp2)
{
    if(1) // если первая строка больше второй,(*pp1)->getName() > (*pp2)->getName()
    {
        person* tempptr = *pp1; // меняем их местами
        *pp1 = *pp2;
        *pp2 = tempptr;
    }
}
void salcmp(person ** a, person ** b){
    if((*a)->getSal() > (*b)->getSal()) // если первая строка больше второй,
    {
        person* tempptr = *a; // меняем их местами
        *a = *b;
        *b = tempptr;

    }
}
void salsort(person** p,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            salcmp(p+i,p+j);
        }
    }


}