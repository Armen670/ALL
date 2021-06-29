#include "matrixadj.h"
#include "iostream"

    matrixadj::matrixadj(int a) {
       matrix = new int*[a];m=a;
       for (int i=0;i<a;i++){
           matrix[i]=new int[a];
           for(int j=0;j<a;j++){
               matrix[i][j]=0;
           }
       }
    }
    void matrixadj::addall() {
    for (int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if (i!=j){
                matrix[i][j]=1;}
        }
    }

}
void matrixadj::AddAnOne(){
    int ** Matrix =new int *[m+1];
    for (int i=0;i<m+1;i++){
        Matrix[i]=new int [m+1];
        for(int j=0;j<m;j++){
            Matrix[i][j]=matrix[i][j];
        }Matrix[i][m+1]=0;delete matrix[i];
    }delete matrix;
    **matrix=**Matrix;m++;
};
void matrixadj::test(){
    for (int i=0;i<m;i++){
        for (int j=0;j<m;j++){
            std::cout<< matrix[i][j];
        }
        std::cout<<std::endl;
    }
}

