// newstr.cpp
// использование оператора new для выделения памяти под строку
#include <iostream>
#include <cstring>
#include "Cctype"
// для strcpy(), и т.д.
using namespace std;
class String
{
private:
    char* str; // указатель на строку
public:
    String(char* s) // конструктор с одним параметром
    {
        int length = strlen(s); // вычисляем длину строки
        str = new char[length + 1]; // выделяем необходимую память
        strcpy(str, s); // копируем строку
    }
    ~String() // деструктор
    {
        cout << "Delete string\n";
        delete[] str; // освобождаем память
    }
    void display() // покажем строку на экране
    {
        cout << str << endl;
    }
    void upit(){
        for (int i=0;i<strlen(str);i++){
            *(str+i)=toupper(*(str+i));
        }
    }
};
int main()
{
    String s1 = "What have you been up to?";
    cout << "s1 = ";
    s1.display();s1.upit();s1.display();
    return 0;
}