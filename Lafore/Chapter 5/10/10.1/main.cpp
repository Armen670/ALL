#include <iostream>
using namespace std;
void func();
int num=0;
int main() {
    func();func();func();func();func();func();func();func();func();func();func();
    return 0;
}
void func(){
    num++;cout <<num;
}