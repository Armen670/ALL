#include <iostream>
using namespace std;
void copy(float* arr,float* arr1,int c,float d){
    for (int i=0;i<c;i++){
        *(arr1+i)=*(arr+i);
    }
    *(arr1+c)=d;
}
int main() {
    char b='y';float* arr = new float[0];float a;int c=0;double asd;
    while(b=='y'){c++;
        cout<<"Do you want to enter another one number?";cin>>b;
        cout<<c<<" : ";cin >>a;float * arr1=new float[c];copy(arr,arr1,c-1,a);delete arr;float* arr =new float [c];
        for (int i=0;i<c;i++){
            *(arr+i)=*(arr1+i);
        }delete arr1;
        }
    for (int i=0;i<c;i++){
        cout<< i+1<<": "<<*(arr+i)<<endl;
        asd+=*(arr+i);
    }asd/=c;
    cout <<"Sredneee arifmiticheskoe : "<<asd;
    return 0;
}
