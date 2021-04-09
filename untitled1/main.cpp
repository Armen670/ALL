#include <iostream>
using namespace std;
int main() {
    cout << "Enter length of array:";int k;int larr;cin>> larr;int *arr = new int[larr];
    for (int i=0;i<larr;i++){
        cout << "Enter "<< i <<"element of array :";
        cin >> arr[i];cout<<endl;
    }
    cout << "Enter k element :";cin >> k;int kelement=arr[k];int otvetindex=0;
    for (int i=(larr-1);(i>=0)&(otvetindex==0);i--){
        if (arr[i]>kelement){
            otvetindex=i;
        }
    }cout << otvetindex;
    return 0;
}
