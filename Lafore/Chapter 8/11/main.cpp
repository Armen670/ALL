#include <iostream>
#include <cmath>
double shill=(double)1/20,pen=shill/12;int UktoUS=50;float UStoUK=(float)1/50;
using namespace std;
class US{
private:
    long double dollar;
public:
    long double getdollar(){return dollar;}
    void putUS(){
        cout <<"$"<<dollar;
    }
};
class UK{
private:
    long pound;int shilling,penny;//1 pound=20 shilling,1 shilling =12 penny;
public:
    UK():pound(0),shilling(0),penny(0){}
    UK(double a){
        pound=a/1;double b=fmod(a,1);
        shilling=b/shill;
        b=fmod(b/0.05,0.05);
        penny=b/pen;
    }
    UK(long a,int b,int c):pound(a),shilling(b),penny(c){}
    void getSterling(){
        cout <<"Enter pound:";cin>>pound;cout <<"Enter sterling:";cin >>shilling;cout <<"Enter penny:";cin >>penny;
    }
    void putSterling(){
        cout <<"POUND"<<pound<<"."<<shilling<<"."<<penny;
    }
    UK operator+(UK a){
        return UK(pound+a.pound,shilling+a.shilling,penny+a.penny);
    }
    UK operator-(UK a){
        return UK(pound-a.pound,shilling-a.shilling,penny-a.penny);
    }
    UK operator* (double a){
        return UK((pound+shilling*shill+penny*pen)*a);
    }
    UK operator/ (UK a){
        return UK(pound/a.pound,shilling/a.shilling,penny/a.penny);
    }
    UK operator/ (double a){
        return UK((pound+shilling*shill+penny*pen)/a);
    }
    UK(US);
    operator double (){
        return pound+shilling*shill+penny*pen;
    }
};
UK::UK (US a){
    UK(a.getdollar()*UStoUK);
}
int main() {
    UK a(12.45);UK b(78.78);a.putSterling();UK c=a /(double)12;c.putSterling();
    return 0;
}
