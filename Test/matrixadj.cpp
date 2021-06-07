#include "matrixadj.h"
#include "iostream"

    matrixadj::matrixadj(int a, int b) {
       matrix = new bool*[a];m=a;n=b;
       for (int i=0;i<a;i++){
           matrix[i]=new bool[b];
           for(int j=0;j<b;j++){
               matrix[i][j]=0;
           }
       }
    }
    void matrixadj::addall() {
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (i!=j){
                matrix[i][j]=1;}
        }
    }

}


