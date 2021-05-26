#include <iostream>
using namespace std;
class node{
protected:int inf;char name[20];
public:
    node():inf (0){cout << "Enter name of node:";cin>>name;}
};
class Pnode{
protected:
    node * anothernode;
    Pnode * ppnode;
public:
    Pnode() : ppnode(0), anothernode(0){}
};
class Graph : private Pnode, private node
        {
private:
public:
        Graph ()
        {Pnode();node();}
        void Out (){Pnode * a=ppnode;
    while(a){
        a=ppnode->ppnode;
    }
}

};
int main() {

    return 0;
}
