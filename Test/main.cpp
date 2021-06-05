#include <iostream>
#include <fstream>
#include "list.h"
#include "matrixadj.h"
#include "matrixinc.h"
using namespace std;
void randomarray(int ,char[]);
int main() {
    //graph A;//A.addnode(A);
    //A.addnode(A);
    //graph a;a.addlast();
    graph a[5];
    for (int i=0;i<5;i++){
        a[i].pass(a[i],a[0]);
    }
    //a[0].passNode(a[0]);
    //a[0].addlast();a[0].deletelast();
    //a[0].passNode(a[0]);
    a[0].deletefirst();
    a[0].passNode(a[0]);
    a[0].deletegraph(&a[1]);
    a[0].passNode(a[0]);
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