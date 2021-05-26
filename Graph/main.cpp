#include <iostream>
using namespace std;
class node{
protected:
public:
    int inf;char name[20];node():inf (0){cout << "Enter name of node:";cin>>name;}
};
class Pnode{
protected:
public:
    Pnode() : ppnode(0){}Pnode * ppnode;
};
class Graph : private Pnode, private node
        {
private:Graph * anothernode;
            void out(Graph * a){cout<< a->name;out(a->anothernode);Pnode* b=a->ppnode;
                while(b){
                }
            }
public:
        Graph ()
        {Pnode();node();}
        void Out (){Pnode * a=ppnode;cout <<name <<"Have connection with : "<<endl;
    while(a){
        a=a->ppnode;
    }
}

};
int main() {

    return 0;
}
