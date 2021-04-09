#include <iostream>
#include <iomanip>
using namespace std;
long double big = 2147483648;
long double small = -2147483648;
class Int{
private:
    int num;
public:
    Int() : num(0){}
    Int (int b):num(b){}
    void output(){
        cout <<num;
    }
    void plus(Int b,Int c){
        num=b.num+c.num;
    }
    Int operator+ (Int b){
        if ((b.num+num<big)&&(b.num+num>small)){
            Int c;c.num=b.num+num;return c;
        }
        else {cout << "Error";exit(1);}
    }
    Int operator+= (Int b){
        if ((b.num+num<big)&&(b.num+num>small)){num+=b.num;Int c=num; return c;}else {cout << "Error";exit(1);}
    }
    Int operator-= (Int b){
        num-=b.num;Int c=num;
        return c;
    }
    Int operator- (Int b){
        Int c=num-b.num;
        return c;
    }
    Int operator/ (Int b){
        Int c=num/b.num;
        return c;
    }
    Int operator* (Int b){
        Int c=num*b.num;
        return c;
    }
    Int operator/= (Int b){
        num/=b.num;Int c=num;return c;
    }
    Int operator*= (Int b){
        num*=b.num;
    }
};
int main() {
    cout <<(400000000000000 < big);Int a={2147483647},b={2147483647},c;c=a+b;c.output();return 0;//c+=a;c.output();
}
