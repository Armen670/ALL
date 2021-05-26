#include <fstream>
#include <stdlib.h>
#include <iostream>
std::ofstream fout;int a=7898546;
void randomarray(int max,char filename[50]){
    fout.open(filename,std::ios_base::out);int *b=new int[max];
    for(int i=0;i<max;i++){
        int c=rand() % 100 ;fout<<c<<std::endl;b[i]=c;
        std::cout <<i;//
    }
    fout.close();
}

