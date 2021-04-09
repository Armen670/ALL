#include <iostream>
using namespace std;
void swap(int &,int &);
int main() {
    int a=10,b=45;swap(a,b);
    cout <<a<<b;
    return 0;
}
void swap(int & a,int & b){
    int c=b;b=a;a=c;
}
