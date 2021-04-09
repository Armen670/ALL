#include <iostream>
#include <string>
using namespace std;
class Employee{
private:
    string organ;
    string pos;
    double exp;
    string name;
    char gender;
    int age;
    double salary;
public :
    static int count;
    Employee(){
        cout << "Enter organisation:";string a;getline(cin,a);organ = a;
        cout << "Enter position :";string b;getline(cin,b);pos=b;
        cout << "Enter name :";string d;getline(cin,d);name=d;
        cout << "Enter experience :";double c;cin >>c; exp=c;
        cout << "Enter gender :";char e;cin>>e;gender=e;
        cout << "Enter age:";int f;cin>>f;age=f;
        cout << "Enter salary:";double g;cin>>g;salary=g;
    }/*
    void Employe(string a,string b,double c,string d,char e,int f,double g){                                  //string a,string b,double c,string d,char e,int g,double f
        organ=a;
        pos=b;
        exp=c;
        name=d;
        gender=e;
        age=f;
        salary=g;
    }*/
    double getCount(){return count;}
    void changeCount(double a){exp+=a;}
    void getOrganPosExpSalary(){cout<<"Organisation : "<< organ<<endl<<"Position : "<<pos<<endl<<"Experience :"<<exp<<endl<<"Salary : "<<salary<<endl;}
    void changeSalary(double a){salary +=a;}
    void getPersonal(){cout<<"Gender : "<< gender<<endl<<"Age :"<<age<<endl<<"Name :"<<name;}//вывод личных данных
    void changePos(string a){pos = a;}
    //void Countplus(){count++;}
    //void Countminus(){count--;}
};
};
int main(){
    Employee A;

    return 0;
     }