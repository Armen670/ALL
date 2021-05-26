#include <iostream>
#include <string.h>
using namespace std;
class String
{
protected:
    enum { SZ = 10 }; // размер массива
    char str[SZ]; // массив для хранения строки
public:
    // конструктор без параметров
    String()
    { str[0] = '\x0'; }
    // конструктор с одним параметром
    String(char s[])
    { strcpy(str, s); } // сохраняем строку в массиве
    // показ строки
    void display() const
    { cout << str; }
    // перевод строки к обычному типу
    operator char*()
    { return str; }
};
class Pstring : public String{
protected:

public:
    Pstring(char a[]){
    if (strlen(a)<10){
        strcpy(str,a);
    }else{
        cout <<"Error overflow!!!";
    }
}
void display(){
    String::display();
}
};
int main() {
    Pstring asdf("4444444");Pstring asd("44444444444444444444444444444444444444444444444444444444444444444444444");
    asdf.display();asd.display();
    return 0;
}
