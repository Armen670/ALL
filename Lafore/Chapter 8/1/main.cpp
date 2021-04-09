#include <iostream>
using namespace std;
class Distance{
private:
    int feet;float inches;
public:
    Distance (): feet(0) , inches(0){}
    Distance (int feet, float inches): feet(feet) , inches(inches){}
    void showdist(){
        cout <<feet<<"\'-"<<inches<<"\'";
    }
    Distance operator+ (Distance) const;
    Distance operator- (Distance) const;
};
Distance Distance ::operator+(Distance d2) const {
    int f= feet + d2.feet;
    float i= inches + d2.inches;
    return Distance(f,i);
}
Distance Distance ::operator-(Distance d2) const {
    int f=feet-d2.feet;
    float i=inches - d2.inches;
    return Distance(f,i);
}
int main() {
    Distance A(123,4356.56);Distance B(122,123.456);
    A.showdist();Distance C;C=A+B;C.showdist();C=C-B;cout <<endl;A.showdist();C.showdist();
    return 0;
}
