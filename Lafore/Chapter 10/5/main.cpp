#include <iostream>
using namespace std;
void addarr(float *,float *,float *,int );
int main() {
    float a[5]={1,2,3,4,5};float b[5]={1,2,3,4,5};
    float c[5];addarr(a,b,c,5);
    for (int i=0;i<5;i++){
        cout <<*(c+i);
    }
    return 0;
}
void addarr(float * a,float * b,float * c,int d){
    for (int i=0;i<d;i++){
        *(c+i)=*(a+i)+*(b+i);
    }
}
