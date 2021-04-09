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
};
int main() {
    time a = {12,60,60},b = {12,12,12},c;
    c.plus(a,b);c.display();
   return 0;
}
