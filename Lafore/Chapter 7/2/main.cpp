#include <iostream>
#include <string>
#include "conio.h"
using namespace std;
class employee{
private:
    string str;
    long int num;
public:
    employee():num(0),str(""){}
    void getdata(){
        cout << "Enter name of employee: ";cin>> str;
        cout << "Enter number of employee: ";cin >>num;
    }
    void putdata(){
        cout <<"Name of employee: "<< str;cout<<endl;
        cout <<"Number of employee: "<<num;
    }
};
int main() {
    employee a[100];char ch;int b=0;
    while (ch=getch()!='\r'){
        a[b].getdata();
    }
    for (int i=0;i<=b;i++){
        a[i].putdata();
    }
    return 0;
}
