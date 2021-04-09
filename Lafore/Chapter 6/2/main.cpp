#include <iostream>
#include "conio.h"
using namespace std;
class tollBooth{
private:
    unsigned int cars;
    double money;
public:
    tollBooth():cars(0),money(0){}
    void PayCar(){
        cars++;
        money+=0.5;
    }
    void NoPayCar(){
        cars++;
    }
    void display(){
        cout << "Cars: "<<cars<<endl<<"Money:"<<money;
    }
};
int main() {
    tollBooth chekpoint;
    char ch;int a=0;
    while ((ch=getch())!='\r'){
        switch (ch){
            case 'y' : chekpoint.PayCar();break;
            case 'n' : chekpoint.NoPayCar();break;
        }
    }
    chekpoint.display();
    return 0;
}
