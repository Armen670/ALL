#include <iostream>
using namespace std;
double power(double ,int =2);
int power(int ,int =2);
long power(long ,int =2);
float power(float ,int =2);
char power(char ,int =2);
int main() {
    double doublenum;int deg;int intnum;long longnum;float floatnum;char charnum;
    cout << "Enter some number for double:";cin >> doublenum;
    cout << "Enter degree:";cin >> deg;
    cout << "Total Number for double :"<< power(doublenum,deg)<< endl;
    cout << "Enter some number for int:";cin >> intnum;cout << "Total Number for int:"<< power(intnum,deg)<<endl;
    cout << "Enter some number for long:";cin >> longnum;cout << "Total Number for long:"<< power(longnum,deg)<<endl;
    cout << "Enter some number for float:";cin >> floatnum;cout << "Total Number for float:"<< power(floatnum,deg)<<endl;
    cout << "Enter some number for char:";cin >> charnum;cout << "Total Number for char:"<< power(charnum,deg)<<endl;
    return 0;
}
char power(char n ,int p){
    char total=n;
    for (int i=0;i<p-1;i++){
        total=total*n;
    }
    return total;
}
float power(float n,int p){
    float total=n;
    for (int i=0;i<p-1;i++){
        total=total*n;
    }
    return total;
}
int power(int n,int p){
    int total=n;
    for (int i=0;i<p-1;i++){
        total=total*n;
    }
    return total;
}
long power(long n,int p){
    long total=n;
    for (int i=0;i<p-1;i++){
        total=total*n;
    }
    return total;
}
double power(double n,int p){
    double total=n;
    for (int i=0;i<p-1;i++){
        total=total*n;
    }
    return total;
}