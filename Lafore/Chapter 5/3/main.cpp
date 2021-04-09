#include <iostream>
#include <conio.h>
using namespace std;
void zeroSmaller(int&,int&);
int main() {
    int a= 74,b=47;zeroSmaller(a,b);
    cout << a<<b;

}
void zeroSmaller(int& a,int& b){
    if (a>b) b=0;
    else a=0;
}
