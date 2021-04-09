#include <iostream>
using namespace std;
int Sizeof(int a[]){return (sizeof(a));}
int perest(bool a,int numbefore[],int numbeforel,int num[],int numl){
    if (a){if(numl>2){
                for(int j=0;j<numl;j++){
                    int *a=new int [numl-1];
                    for (int i=0,c=0;i<numl;i++){if(i!=j){a[c]=num[i];c++;}}
                    int *b=new int [numbeforel+1];
                    for(int k=0;k<numbeforel;k++){b[k]=numbefore[k];}b[numbeforel]=num[j];
                perest(1,b,numbeforel+1,a,numl-1);delete a;delete b;}
            }else if(numl==2){
            for(int i=0;i<numbeforel;i++){cout<<numbefore[i];}cout<<num[0]<<num[1]<<endl;for(int i=0;i<numbeforel;i++){cout<<numbefore[i];}cout<<num[1]<<num[0]<<endl;
        }}else {
        if(numl>2){
            for(int j=0;j<numl;j++){
                int *a=new int[numl-1];
                for (int i=0,c=0;i<numl;i++){
                    if(i!=j){a[c]=num[i];c++;}
                }
                int b[1]= {num[j]};
                perest(1,b,1,a,numl-1);delete a;}
        }else if(numl==2){
            cout << num[0]<<num[1]<<endl<<num[1]<<num[0];
        }}
}
int main(){
    int numl;cout << "How much numbers?";cin >> numl;int *num=new int [numl];
    for (int i=0;i<numl;i++) {
        cout << "Enter " << i + 1 << " number:";
        cin >> num[i];}
    perest(0,num,numl,num,numl);
    return 0;
}