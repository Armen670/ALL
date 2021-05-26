#include <iostream>
#include <string>
using namespace std;
class publ{
protected:
    string name;float cost;
public:
    publ(): name(""),cost(0){};
    void getdata(){
        cout <<"Enter name of publication (string): ";cin >>name;
        cout <<"Enter cost of publication: ";cin >>cost;
    }
    void putdata(){
        cout <<"Name of publication: "<<name<<endl<<"Cost of publication: "<<cost<<endl;
    }

};
class sales{
protected:
    float cost3[3];
public:
    void getdata(){
        for (int i=0;i<3;i++){
            cout <<"Enter sales of "<<i<<"month : ";cin>>cost3[i];
        }
    }
    void putdata(){
        for (int i=0;i<3;i++){
            cout <<"Sales of "<<i<<"month :"<<cost3[i]<<endl;
        }
    }
};
class book : public publ, public sales{
protected:
    int page;
public:
    void getdata(){
        publ::getdata();
        cout <<"How much page in book: ";cin >> page;
        sales::getdata();
    }
    void putdata(){
        publ::putdata();
        cout<<"Page in book: "<<page<<endl;
        sales::putdata();
    }
};
class type : public publ ,public sales{
protected:
    float time;
public:
    void getdata(){
        publ::getdata();
        cout<<"How much time in audiobook: ";cin >>time;
        sales::getdata();
    }
    void putdata(){
        publ::putdata();
        cout <<"Time of audiobook: "<<time<<endl;
        sales::putdata();
    }

};
int main() {
    book a;type b;a.getdata();b.getdata();a.putdata();b.putdata();int asd =4486486;
    return 0;
}
