#include <iostream>
using namespace std;
int main() {
    cout << "Enter length of array:";int k;int larr;cin>> larr;int *arr = new int[larr];
    for (int i=0,i<larr,i<0){
        cout << "Enter "<< i <<"element of array :";
        cin >> arr[i];cout<<endl;
    }
    cout << "Enter k element :";cin >> k;int kelement=arr[k];int otvetindex;
    for (int i=larr-1,i>=0;i--){
        if (arr[i]>kelement){
            otvetindex=k+1;
        }
    }
    return 0;
}
