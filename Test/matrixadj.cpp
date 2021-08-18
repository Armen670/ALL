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
    matrix[0][0]=48;matrix[0][7]=48000000;matrix[1][0]=-9223372036854775807;
}
void matrixadj::addall() {
    for (int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if (i!=j){
                matrix[i][j]=1;}
        }
    }

}
matrixadj::~matrixadj(){
    for(int i=0;i<m;i++){
        delete matrix[i];
    }delete matrix;matrix=NULL;
}
void matrixadj::AddAnOne(){
    int ** Matrix =new int *[m+1];
    for (int i=0;i<m;i++){
        Matrix[i]=new int [m+1];
        for(int j=0;j<m;j++){
            Matrix[i][j]=matrix[i][j];
        }delete matrix[i];
    }
    Matrix[m]=new int [m+1];
    for (int i=0;i<m+1;i++){
        Matrix[i][m]=0;
        Matrix[m][i]=0;
    }
    delete matrix;matrix=new int* [m+1];//matrix =Matrix;for (int i=0;i<m+1;i++){delete Matrix[i];}delete Matrix; Влад петух
    for(int i=0;i<m+1;i++){
        matrix[i]=new int [m+1];
        for(int j=0;j<m+1;j++){
            matrix[i][j]=Matrix[i][j];
        }delete Matrix[i];
    }delete Matrix;
    ;m++;
};
void matrixadj::test(){
    for (int i=0;i<m;i++){
        for (int j=0;j<m;j++){
            std::cout<< matrix[i][j];
        }
        std::cout<<std::endl;
    }
}
void matrixadj::sex() {
    for (int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            matrix[i][j]=1;
        }
    }
    matrix[0][0]=922807;
}