#include <iostream>
using namespace std;
class arr{
private:
    int array[100];
public:
    arr(){}
    int & operator[](int n){
        if ((n<100) || (n>0)){
            return *(array+ n);
        }else{
            cout << "Error ";}
    }
};
int main() {
    arr armen;armen[789]=798;cout <<armen[789];
    return 0;
}
