#include <iostream>
void mass(int n,int x[]);
class arrray{
private :int ** array;
public:
	arrray(int a, int b){
array =new int [a][b];
//for (int i=0;i<a;i++){array[i]=new int[b];}
}
void in(int a){
	    //for(int )
	}
};
int main(){

        int x[7];
        mass(7,x);
        for (int i=0;i<7;i++){
            std::cout <<*(x+i);}

    //arrray A(4,5);
    return 0;
}
void mass(int n ,int x[]){
    for (int i=0;i<n;i++){
            *(x+i)=i*i;
        }
    }