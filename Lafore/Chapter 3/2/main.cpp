#include <iostream>
using namespace std;
int main() {
    cout << "1.Celsius to Fahrenheit"<<endl<<
            "2.Fahrenheit to Celsius";
    int a;int b;cin >> a;double c = 0.55555556;
    switch (a){
        case 1:
            cout << "Enter Celsius:";cin>>b;
            cout << "Fahrenheit:"<<(b*(1/c))+32;
            break;
        case 2:
            cout <<"Enter Fahrenheit:";cin >>b;
            cout <<"Ceelsius :"<<(b-32)*c;
            break;
    }
    return 0;
}
