#include <iostream>
#include <string.h>
using namespace std;
class String
{
protected:
    enum { SZ = 80 }; // размер массива
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
public:
    Pstring(char a[]){
        if (strlen(a)<80){
            strcpy(str,a);
        }else{
            cout <<"Error overflow!!!";
        }
    }
};
class Pstring2 :public Pstring{
public:
    Pstring2(char s[]):Pstring(s){}
    Pstring2 left(Pstring2 b,int a){
        if (a>strlen(b.str))    a=strlen(b.str);
        for (int i=0;i<a;i++){
            str[i]=b.str[i];
        }
        return Pstring2(str);
    }
    Pstring2 mid(Pstring2 c,int a,int b){
        if (b+a>strlen(c.str))    a=strlen(c.str)-b;int g=0;
        for (int i=b;i<(b+a);i++){
            str[g++]=c.str[i];
        }
        return Pstring2(str);
    }
    Pstring2 right(Pstring2 c,int a){
        if (a>strlen(c.str))    a=strlen(c.str);
        int g=a-1;
        for (int i=strlen(c.str)-1;i>strlen(c.str)-a-1;i--){
            str[g--]=c.str[i];
        }
        return Pstring2(str);
    }

};
int main() {
    Pstring2 asdf("4444444");Pstring2 asd("0123456789");asdf.right(asd,1);asdf.display();
    //asdf.display();asd.display();
    return 0;
}