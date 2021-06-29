#include <iostream>
#include <fstream>
#include "list.h"
#include "matrixadj.h"
#include "matrixinc.h"
using namespace std;
void randomarray(int ,char[]);
int main() {
    //matrixadj asd1(5,4);
    //matrixinc asd(5);
    //asd.connectmatrix();
    /*graph A,B,C,D,E;
    A.connect(&A,&B);
    A.connect(&B,&C);
    A.connect(&C,&D);A.connect(&D,&E);
    //A.pass(A,B);
    A.anotherpass(&A,&B,0);
    int a=789;
    */
    matrixadj A(5);
    A.test();
    A.AddAnOne();
    A.test();
    return 0;

}
/*
ofstream fout;char filename[30]="data.txt";
fout.open(filename,ios_base::out);
fout <<"Fuck( No more this shit )YOU";
fout.close();
char buff[50];
ifstream fin("data.txt",ios_base::in);
//fin>>buff;
//cout <<buff<<endl;
fin.getline(buff,50);if(fin.is_open()){cout <<"all is OK";}
fin.close();
cout <<buff;
//randomarray(157,"randomarray.txt");
cin.clear();cout.clear();
//C.addnode(&C);
//system("pause");*/