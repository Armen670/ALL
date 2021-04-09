#include <iostream>
using namespace std;
class ship{
private:
    unsigned int degree;float min;char dir;unsigned int sernum;static unsigned int num;
public:
    ship():degree(0),min(0),dir('N'){num++;sernum=num;}
    void InputCoor(){
        cout <<"Enter degree of ship number "<<sernum<<" : ";cin >>degree;cout <<"Enter minute of ship number "<<sernum<<" : ";
        cin >>min;cout <<"Enter direction of ship number "<<sernum<<" : ";cin >>dir;
    }
    void Output(){
        cout << "Serial number: " << sernum<<endl<<"Coordinate: "<< degree<<'\xF8'<<min<<'`'<<dir<<endl;
    }
};unsigned int ship::num=0;
int main() {
    ship a,b,c;a.InputCoor();b.InputCoor();c.InputCoor();a.Output();b.Output();c.Output();
    return 0;
}
