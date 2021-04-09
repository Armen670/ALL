#include <iostream>
using namespace std;
struct time{
    int hour,minute,second;
};
void swap(time &,time &);
void swap(int &,int &);
int main() {
    time d={1,1,1},e={2,2,2};swap(d,e);
    cout << "D:"<<d.hour<<d.minute<<d.second << endl<< "E:"<< e.hour<<e.minute<<e.second;
    return 0;
}
void swap(int & a,int & b){
    int c=b;b=a;a=c;
}
void swap(time & a,time & b){
    time c=b;b=a,a=c;
}
