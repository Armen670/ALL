#include <iostream>
using namespace std;
float area(float);
int main(){
    float rad;cout <<"Enter some radius :";cin >>rad;
    cout << "Circle area: "<<area(rad);
    return 0;
}
float area(float rad){
    return ((rad*rad)*3.1415);
}

