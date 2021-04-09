#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a;
    cout << "Enter some number :";cin >> a;int k=1;
    for (int i=0;i<20;i++){
        for (int j=0;j<10;j++){
            cout <<setw(5)<<k*a;
            k++;
        }
        cout <<endl;
    }
    return 0;
}
