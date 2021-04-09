#include <iostream>
using namespace std;
struct  phone{
    int city;
    int station;
    int abonent;
};
int main() {
    phone I = {255,896,7800 };phone you;
    cout << "Enter phone number:"<<endl << "code of city:";cin >> you.city;
    cout<< "code of station:";cin>> you.station;cout << "cod eof abonent:";cin >> you.abonent;
    cout << "My number :";cout <<"("<<I.city<<")"<<I.station<<"-"<<I.abonent<<endl;
    cout << "Your number :";cout <<"("<<you.city<<")"<<you.station<<"-"<<you.abonent;
    return 0;
}
