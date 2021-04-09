#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout <<"Up to what number search for Prime numbers?";int n;cin>>n;
    vector <int> a(n);vector <int> b;
    for (int i=0;i<(a.size());i++){
        a[i]=i+2;
    }
    for (int i=0;i<(a.size());i++){
        for (int j=i+1;j<(a.size());j++){
            if((a[j]%(a[i]))==0){a.erase(a.begin()+j);}
        }
        cout <<a[i]<<endl;
    }
    return 0;
}