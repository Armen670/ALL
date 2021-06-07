#include "matrixinc.h"
#include "iostream"

#include "cmath"

 matrixinc::matrixinc(int m) {
    int a=ceil(m*(m-1)/2);
    matrix =new bool[m][a];
}
