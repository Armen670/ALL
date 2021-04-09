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
    static int CCount;
    int Count;
    Employee(){
        CCount++;
        cout <<"Enter information about Employee Number "<<":"<<endl;
        cout << "Enter organization :";cin.sync();string b;getline(cin,b);organ=b;
        cout <<"Enter position :";string g;getline(cin,g);pos=g;
        cout <<"Enter experience :";cin.sync();double c;cin >> c;exp=c;
        cout <<"Enter name :";cin.sync();getline(cin,b);name = b;
        cout <<"Enter gender :";cin.sync();char d;cin>> d;gender = d;
        cout <<"Enter age :";cin.sync();int e;cin>>e;age = e;
        cout <<"Enter salary :";cin.sync();cin>>c;salary=c;
        /*organ="Some organisation";
        pos = "Some position";
        exp=0;
        name = "Some name";
        gender = 'M';
        age = 0;
        salary =0;*/
        //count++;
    }
    ~Employee(){
        CCount--;
    }
    //void SetOrgan(string a){organ=a;}
    void SetPos(string a){pos=a;}
    //void SetExp(double a){exp=a;}
    //void SetName(string a){name = a;}
    //void SetGender(char a){gender = a;}
    //void SetAge(int a){age = a;}
    //void SetSalary(double a){salary=a;}
    void AddSalary(){
        cout << "How much salary to add?:";int a;cin>>a;
        salary+=a;
    }
    //string GetOrgan(){return organ;}
    //string GetPos(){return pos;}
    //double GetExp(){return exp;}
    //double GetSalary(){return salary;}
    void GetInform(){
        cin.sync();
        cout <<"Organisation: "<<organ;cout<<endl;
        cout <<"Position: " << pos;cout<<endl;
        cout << "Experience: "<<exp;cout<<endl;
        cout << "Salary: "<<salary;cout<<endl<<endl;
    }
    void GetPersInform(){
        cout <<"Name: "<<name<<endl;
        cout <<"Gender: "<<gender<<endl;
        cout <<"Age: "<<age<<endl<<endl;
    }
    static void Static(){
        //cout<<count;
    }
};/*
void NewEmployee(Employee a,int i){
        cout <<"Enter information about Employee Number "<< i+1<<":"<<endl;
        cout << "Enter organization :";cin.sync();string b;getline(cin,b);a.SetOrgan(b);
        cout <<"Enter position :";string g;getline(cin,g);a.SetPos(g);
        cout <<"Enter experience :";cin.sync();double c;cin >> c;a.SetExp(c);
        cout <<"Enter name :";cin.sync();getline(cin,b);a.SetName(b);
        cout <<"Enter gender :";cin.sync();char d;cin>> d;a.SetGender(d);
        cout <<"Enter age :";cin.sync();int e;cin>>e;a.SetAge(e);
        cout <<"Enter salary :";cin.sync();cin>>c;a.SetSalary(c);
}*/
int Employee::CCount=0;
int main(){
    //Employee Armen; //= Employee("LAM","Meneger",13.0202,"Armen Baburyan Karenovich",'M',19,13000);
    //Employee Armen = Employee("a","a",3.1123,"Armen",'M',45,2132);
    cout << "How pepole do you want to add?";Employee *A=new Employee[2];
   // for (int i=0;i<1;i++){
        //NewEmployee(A[i],i);
    //}
    cin.sync();
    A[0].GetInform();
    A[0].SetPos("Fuck YOU");
    A[0].GetInform();
    A[0].AddSalary();
    A[0].GetInform();
    A[0].GetPersInform();
    //A[0].Static();
}