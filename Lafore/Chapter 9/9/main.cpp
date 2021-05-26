#include <iostream>
#include <string>
using namespace std;
class publ{
protected:
    string name;float cost;
public:
    publ(): name(""),cost(0){}
    void getdata(){
        cout <<"Enter name of publication (string): ";cin >>name;
        cout <<"Enter cost of publication: ";cin >>cost;
    }
    void putdata(){
        cout <<"Name of publication: "<<name<<endl<<"Cost of publication: "<<cost<<endl;
    }

};
class publ2 : public publ{
protected :
 short int day,month,year;
public:
    publ2(): publ() ,day(0),month(0),year(0){}
    void getdata(){
        publ::getdata();
        cout << "Enter day of publication : ";cin >>day;
        cout <<"Enter month of publication : ";cin >>month;
        cout <<"Enter year of publication : ";cin >> year;
    }
    void putdata(){
        publ::putdata();
        cout <<"Data : "<<day<<'.'<<month<<'.'<<year<<endl;
    }

};
class book : public publ2{
protected:
    int page;
public:
    void getdata(){
        publ2::getdata();
        cout <<"How much page in book: ";cin >> page;
    }
    void putdata(){
        publ2::putdata();
        cout<<"Page in book: "<<page<<endl;
    }
};
class type : public publ2{
protected:
    float time;
public:
    void getdata(){
        publ2::getdata();
        cout<<"How much time in audiobook: ";cin >>time;
    }
    void putdata(){
        publ2::putdata();
        cout <<"Time of audiobook: "<<time<<endl;
    }

};
int main() {
    book a;type b;a.getdata();b.getdata();a.putdata();b.putdata();int asd =4486486;
    return 0;
}
