#include <iostream>
using namespace std;

enum period {hour,week,month};
const int LEN = 80; // максимальная длина имени
///////////////////////////////////////////////////////////
class employee // некий сотрудник
{
protected:
    char name[LEN]; // имя сотрудника
    unsigned long number; // номер сотрудника
public:
    void getdata()
    {
        cout << "\n Введите фамилию: "; cin >> name;
        cout << " Введите номер: "; cin >> number;
    }
    void putdata() const
    {
        cout << "\n Фамилия: " << name;
        cout << "\n Номер: " << number;
    }
};
///////////////////////////////////////////////////////////
class manager : public employee // менеджер
{
protected:
    char title[LEN];double dues;// должность, например вице-президент
    // сумма взносов в гольф-клуб
public:
    void getdata()
    {
        employee::getdata();
        cout << " Введите должность: "; cin >> title;
        cout << " Введите сумму взносов в гольф-клуб: "; cin >> dues;
    }
    void putdata() const
    {
        employee::putdata();
        cout << "\n Должность: " << title;
        cout << "\n Сумма взносов в гольф-клуб: " << dues;
    }
};
///////////////////////////////////////////////////////////
class scientist : public employee // ученый
{
protected:
    int pubs; // количество публикаций
public:
    void getdata()
    {
        employee::getdata();
        cout << " Введите количество публикаций: "; cin >> pubs;
    }
    void putdata() const
    {
        employee::putdata();
        cout << "\n Количество публикаций: " << pubs;
    }
};
///////////////////////////////////////////////////////////
class laborer : public employee // рабочий
{
};
class employee2: public employee{
protected:
    double comp;period Period;//comp=compensation;
public:
    void getdata(){
        employee::getdata();
        cout <<"How much compensation of this employee: ";cin >>comp;char a;
        cout <<"How is thee compensation is calculated, for hour (h), for week (w),for month(m)?";cin >>a;
        switch (a){
            case 'w':Period=week;break;
            case 'h':Period=hour;break;
            case 'm':Period-month;break;
        }
    }
    void putdata(){
        employee::putdata();
        cout <<"Compensation:"<<comp<<endl<<"For "<<Period;
    }
};
class manager2 : public manager, public employee2{
public:
    void getdata(){
        employee2::getdata();
        cout << " Введите должность: "; cin >> title;
        cout << " Введите сумму взносов в гольф-клуб: "; cin >> dues;
    }
    void putdata(){
        employee2::putdata();
        cout << "\n Position: " << title;
        cout << "\n Amount of contributions to the golf club: " << dues;
    }
};
class scientist2 : public scientist,public employee2{
public:
    void getdata(){
        employee2::getdata();
        cout << "Enter numbers of publications: "; cin >> pubs;
    }
    void putdata(){
        employee2::putdata();
        cout << "\n Number of publications: " << pubs;
    }

};
class laborer2 : public laborer, public employee2{
public:
    void getdata(){
        employee2::getdata();
    }
    void putdata(){
        employee2::putdata();
    }
};
///////////////////////////////////////////////////////////
int main()
{
    manager2 m1, m2;
    scientist2 s1;
    laborer2 l1;
    // введем информацию о нескольких сотрудниках
    cout << endl;
    cout << "\nВвод информации о первом менеджере";
    m1.getdata();
    cout << "\nВвод информации о втором менеджере";
    m2.getdata();
    cout << "\nВвод информации о первом ученом";
    s1.getdata();
    cout << "\nВвод информации о первом рабочем";
    l1.getdata();
    // выведем полученную информацию на экран
    cout << "\nИнформация о первом менеджере";
    m1.putdata();
    cout << "\nИнформация о втором менеджере";
    m2.putdata();
    cout << "\nИнформация о первом ученом";
    s1.putdata();
    cout << "\nИнформация о первом рабочем";
    l1.putdata();
    cout << endl;
    return 0;
}