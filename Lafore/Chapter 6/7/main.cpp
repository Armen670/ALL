#include <iostream>
#include "conio.h"
using namespace std;
class SeaNav{
private:
    unsigned int degree;float min;char dir;
public:
    SeaNav(): degree(0),min(0),dir('N'){}
    SeaNav(int a,float b,char c) :degree(a),min(b),dir(c){}
    void InputCoor(){
        cout <<"Enter degree: ";cin >>degree;cout <<"Enter minute: ";cin >>min;cout <<"Enter direction: ";cin >>dir;
    }
    void OutputCoor(){
        cout << degree<<'\xF8'<<min<<'`'<<dir;
    }

};
int main() {
    SeaNav a{45,85.54,'S'};a.OutputCoor();
    char ch;while((ch=getch()) != '\r'){
        a.InputCoor();a.OutputCoor();
    }
    return 0;
}
