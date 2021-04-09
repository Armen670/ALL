#include <iostream>
#include "conio.h"
struct time{
    int hour;
    int minute;
    int second;
};
using namespace std;
long time_to_secs(time );
time secs_to_time(long );
int main() {
    char ch[9];time a={0,0,0};
    cin.getline(ch,9);
    a.hour=(ch[0]-48)*10+(ch[1]-48);a.minute=(ch[3]-48)*10+(ch[4]-48);a.second=(ch[6]-48)*10+(ch[7]-48);
    cout <<a.hour<<":"<<a.minute<<":"<<a.second<<endl<<time_to_secs(a)<<endl;time c=secs_to_time(time_to_secs(a));
    cout <<c.hour<<":"<<c.minute<<":"<<c.second;
    return 0;
}
long time_to_secs(time a){
    long b=a.hour*3600+a.minute*60+a.second;
    return b;
}
time secs_to_time(long a){
    time b;
    if (a>=3600){
        b.hour=a/3600;a=a%3600;
    }if (a>60){
        b.minute=a/60;a=a%60;
    }
    b.second=a;
    return b;
}