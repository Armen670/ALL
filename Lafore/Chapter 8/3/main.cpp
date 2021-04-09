#include <iostream>
#include <conio.h>
using namespace std;
class time {
private:
    unsigned int hour,minute,second;
public:
    time() : hour(),minute(0),second(0){}
    time(int a,int b,int c): hour(a),minute(b),second(c){}
    void display(){
        cout << hour<<":"<<minute<<":"<<second;
    }
    void plus(time a,time b){
        hour=a.hour+b.hour;
        if ((a.second+b.second)>=60){
            minute+=(a.second+b.second)/60;
            second+=(a.second+b.second)%60;
        }else{
            second+=(a.second+b.second)   ;
        }if ((a.minute+b.minute)>=60){
            hour+=((a.minute+b.minute)/60);
            minute+=(a.minute+b.minute)%60;
        }else{
            minute+=(a.minute+b.minute);
        }
    }
    void overload(){
        if (second >=60){
            minute++;second=0;
        }
        if(minute >=60){
            hour++;minute=0;
        }
    }
    time operator+ (time a){
        time b;b.hour=a.hour +hour;b.minute=a.minute+minute;b.second=a.second+second;a.overload();b.overload();
        return b;
    }
    time operator++ (int){
        return time(hour,minute,second++);
    }
    time operator++(){
        return time(hour,minute,++second);
    };
    time operator--(int) {
        while (second <=0){minute--;second+=60;}
        while (minute<0){hour--;minute+=60;}return time(hour,minute,second--);
    }
    time operator--(){
        while (second <=0){minute--;second+=60;}
        while (minute<0){hour--;minute+=60;}return time(hour,minute,--second);
    }
    time operator-(time a){
        hour-=a.hour;minute-=a.minute;second-=a.second;
        return time(hour,minute,second);
    }
};
int main() {
    time a = {12,60,60},b = {12,12,12},c;
    c=a-b;c.display();
    return 0;
}
