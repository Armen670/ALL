#include "matrixinc.h"
#include "iostream"

#include "cmath"

 matrixinc::matrixinc(int m) {
    matrix =new bool*[m];int a=(m*(m-1)/2);
    for(int i=0;i<m;i++){
        matrix[i]=new bool[a];
        for (int j=0;j<a;)
        for(int j=0;j<a;j++){
            matrix[i][j]=false;//asdasdasd
        }
    }
    node =m;edge=a;
}
void matrixinc::Out(int a){
    for (int i=0;i<edgenum;i++){
        if (matrix[a][i]==true){
            for (int j=0;j<node;j++){
                if (matrix[j][i]==true&&j!=a){
                    std::cout << j;break;
                }
            }

        }
    }

}
void matrixinc::connect(int a,int b){
    matrix[a][edgenum]=1;
    matrix[b][edgenum++]=1;
}
bool matrixinc::check(int a,int b){
    for (int i=0;i<edgenum;i++){
        if (matrix[a][i]==true&&matrix[b][i]== true){
            return 1;
        }
    }
    return 0;
}
void matrixinc::connectmatrix(){
    for (int i=0;i<node;i++){
        for(int j=i+1;j<node;j++){
        if (!check(j,i)){
            matrix[j][edgenum]= true;matrix[i][edgenum++]=true;}
        }
    }
}

