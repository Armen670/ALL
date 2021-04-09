#include <iostream>
using namespace std;
double power(double ,int =2);
int main() {
    double num;int deg;
    cout << "Enter some number:";cin >> num;
    cout << "Enter degree:";cin >> deg;
    cout << "Total Number:"<< power(num,deg);
    return 0;
}
double power(double n,int p){
    double total=n;
    for (int i=0;i<p-1;i++){
    total=total*n;
    }
    return total;
}