#include "iostream"
#include "list.h"
    graph::graph(){
        statnum++;num=statnum;
        weight=0;
        Node.next=NULL;Node.pointer=NULL;
        std::cout <<"WWWW";
    }
    graph::graph(int m){
        //statnum++;num=statnum;
        weight=m;
        Node.next=NULL;Node.pointer=NULL;
    }
    void graph::addnode(graph *&B){
        graph* A = new graph;char asd;
        std::cout <<"Weight of node :";A->weight=78;
        std::cout <<"Connect with node number "<<B->num<<"?";
        std::cin>>asd;
        if (asd =='y'){
            A->Node.pointer=B;
            B->Node.pointer=A;
        }
        //проход по графу
    }
    void graph::pass(int n,int arr[]){
        for(int i=0;i<n;i++){
            arr[i]=i*i;
        }
        int * arr1= new int[n+1];
        for(int i=0;i<n;i++){
            arr1[i]=arr[i];
        }
        delete arr;
        arr = new int[n + 1];
        for(int i=0;i<n;i++){
            arr[i]=arr1[i];
        }
        arr[n+1]=789;
    }
    int graph::pass(){
        //graph A=this
        //while()
    }

//int graph::statnum=46546;
/*
int main(){
    graph c;
    int * b=c.pass();
    for(int i=0;i<45;i++){
        std::cout <<b[i];
    }
    return 0;
}*/

/*struct node{
    int num;node * next,*prev;
};
using link=node*;
class doublecyclelist {
private:
    node Node;
public:
    doublecyclelist(){
        Node.next=&Node;Node.prev=&Node;Node.num=0;
        //cout <<&Node<<&next<<&prev;
    }
};*/