#include <iostream>
using namespace std;
int main() {
    int a0[10];int a2[10];int a1[10];int a3[10];int a4[10];int a5[10];int a6[10];int a7[10];int a8[10];int a9[10];
    int* ap[10];(*ap)=a0;ap[0]=a0;ap[1]=a1;ap[2]=a2;ap[3]=a3;ap[4]=a4;ap[5]=a5;ap[6]=a6;ap[7]=a7;ap[8]=a8;ap[9]=a9;
    //int* asd= &a2[0];*(asd+7)=45656;int asdf=*(*(ap+2)+7);cout <<asdf;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            *(*(ap+i)+j)=i*10+j;
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout <<*(*(ap+i)+j);
        }
        cout<<endl;
    }
    return 0;
}
