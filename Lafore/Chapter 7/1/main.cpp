#include <iostream>
using namespace std;
int reverseit(char str[]);
int main() {
    char str[80];cin.getline(str,81);reverseit(str);cout << str;
    return 0;
}
int reverseit(char str[]){
    int lenghtStr;char a;
    for (int i=0;str[i]!='\0';i++){
        lenghtStr++;
    }
    for (int i=0;i<lenghtStr/2;i++){
        a=str[i];str[i]=str[lenghtStr-i-1];str[lenghtStr-i-1]=a;
    }
}
