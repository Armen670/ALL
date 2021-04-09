#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Str{
private:
    enum{SZ=80};
    char str [SZ];
public:
    Str(){strcpy(str,"");}
    Str(char a[]){strcpy(str,a);}
    void display() const {cout <<str;}
    Str operator+ (Str ss) const {
        Str temp;
        if (strlen(str) + strlen(ss.str)<SZ ){
            strcpy(temp.str,str);strcat(temp.str,ss.str);
        }else{
            cout << "Overflow";exit(1);
        }
        return temp;
    }
    Str operator+= (Str);
};
Str Str::operator+= (Str ss)  {
    Str temp(str);
    if (strlen(str) + strlen(ss.str)<SZ ){
        strcat(str, ss.str);
    }else{
        cout << "Overflow";exit(1);
    }
    return temp;
}
int main() {
    Str abc("65sad4f685ds4f68dsf4fg98s4");Str cbc("LALKA");abc+=cbc;abc.display();Str asd;asd=abc+=cbc;asd.display();
    return 0;
}
