#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Distance{
private:
    int feet;
    float inches;
public:
    Distance():feet(rand()),inches(rand()){}
    int Feet(){
        return feet;
    }
    float Inches(){
        return inches;
    }


};
int main() {
    srand(static_cast<unsigned int>(time(0)));
    Distance a[1000];unsigned long int feet=0,inches=0;
    for (int i=0;i<1000;i++){
        feet+=a[i].Feet();inches+=a[i].Inches();
    }
    feet/1000;inches/1000;cout <<"Feet: "<<feet<<endl<<"Inches: "<<inches;
    return 0;
}
