#include <iostream>
#include <cstring>
using namespace std;
void top(char *);
int strcmp1(char *,char* );
int main() {
    char a[]="ASDc";char b[]="asdf";top(a);cout<<strcmp(a,b)<<strcmp1(a,b) <<a<<b;
    return 0;
}
int strcmp1(char *a,char* b){
    int c=0; top(a);top(b);
    for(int i=0;*(a+i)+*(b+i);i++){
        if(*(a+i)==*(b+i)){}else if(*(a+i)<*(b+i)){
            c=-1;break;
        }else{c=1;break;}
    }
    return c;
}
void top(char *a){
    for(int i=0;*(a+i);i++){
        if (*(a+i)>64||*(a+i)<91){
            *(a+i)+=32;
        }
    }
}