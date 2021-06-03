#include "matrixadj.h"
#include "iostream"

    matrixadj::matrixadj(int a, int b) {
       // matrix = new bool [a][b];m=a;n=b;
    }
    void matrixadj::addall() {
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (i!=j){
                matrix[i][j]=1;}
        }
    }

}


