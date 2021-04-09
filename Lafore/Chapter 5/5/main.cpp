#include <iostream>
#include "conio.h"
using namespace std;
struct time{
    int hour;
    int minute;
    int second;
};
long int hms_to_secs(struct time);
int main()
{
    char g;time a;
    while (0==0){
        cout << "Enter hour:";cin >>a.hour;cout << "Enter minutes:";cin>> a.minute;cout << "Enter seconds:";cin >> a.second;
        cout << hms_to_secs(a)<<endl;
    }
    return 0;
}
long hms_to_secs(struct time a){
    long int b = 0;b+=a.hour*3600+a.minute*60+a.second;
    return b;
}
