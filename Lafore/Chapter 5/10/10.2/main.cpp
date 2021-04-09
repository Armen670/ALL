#include <iostream>
using namespace std;
void func();
int main() {
    func();func();func();func();func();func();func();func();func();func();func();func();func();
    return 0;
}
void func(){
    static int total=0;
    total++;cout << total;
}
