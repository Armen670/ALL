#include <iostream>
using namespace std;
struct point {
    int x;int y;
};
int main() {
    point one,two , three;
    cout <<"Enter coordinates of point one :"<<endl<<"x:";cin >> one.x;cout << "y:";cin >>one.y;
    cout <<"Enter coordinates of point two :"<<endl<<"x:";cin >> two.x;cout << "y:";cin >>two.y;
    three = {one.x+ two.x,one.y+two.y};
    cout << "Coordinates of one + two:"<<endl<<"x:"<<three.x<<"y:"<<three.y;
    return 0;
}
