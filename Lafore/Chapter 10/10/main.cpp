#include <iostream>
using namespace std;
class sarr{
    privat
};
int main() {
    int* arr[10];
    for (int i=0;i<10;i++){
        *(arr+i)= new int [10];
        for (int j=0;j<10;j++){
            *(*(arr+i)+j)=i*10+j;
        }
    }
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            cout <<*(*(arr+i)+j);
        }
        cout <<endl;
    }
    return 0;
}
