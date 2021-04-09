#include <iostream>
using namespace std;
class employee{
private:
    int num;float salary;
public:
    employee(){
        cout <<"Enter number of emplye: ";cin >>num;cout << "Enter salary of emplyee: ";cin >> salary;
    }
    void display(){
        cout<< "Number of employee: "<<num<<endl<<"Salary of employee:"<<salary<<endl;
    }
};
int main() {
        employee a,b,c;a.display();b.display();c.display();
        return 0;
}
