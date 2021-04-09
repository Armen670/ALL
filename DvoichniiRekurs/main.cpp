#include <iostream>
using namespace std;
int dvoich(int a[],int f[],int d,int b){
    int c=d/2;
    if (a[c]==b){return f[c];}
    else if(a[c]<b){
        int *h=new int[d-c];
        int *e=new int[d-c];
        for (int i=0;i<(d-c);i++){e[i]=a[c+i];h[i]=f[c+i];}
        dvoich(e,h,d-c,b);
    }else{
        int *h=new int[c];
        int *e=new int[c];
        for (int i=0;i<c;i++){e[i]=a[i];h[i]=f[i];}
        dvoich(e,h,c,b);
    }
}
int main(){
    cout << "Enter size of array:";int b;cin >> b;int *a=new int[b];int *e=new int[b];
    for(int i=0;i<b;i++){a[i]=i+1;e[i]=i;}
    cout << "Enter search number:";int n;cin >> n;
    cout <<dvoich(a,e,b,n);
}