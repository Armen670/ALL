#include <iostream>
#include "cmath"
class bintree{
private:
   struct node{
       int num;
       node * l,*r;
       int depth;
   };
   node * Node=new node;
    int depth;
    int * lose , *win, *arr;int lossize,winsize,arrsize,arrnum ,losenum,winnum;
public:
    bintree(int size,int arrsize){
        depth=size;Node =(newnode(size));
        arr = new int [arrsize];
        win = new int [arrsize];
        lose = new int [arrsize];
        for (int i=0;i<arrsize;i++){
            arr[i]=i+1;
            win[i]=0;lose[i]=0;
        }arrnum=0;

    }
    node* newnode(int depth){
        if (depth!=0){node* a=new node;
        a->num=0;a->depth=abs(((bintree::depth)+1)-depth);
        a->l=newnode(depth-1);
        a->r=newnode(depth-1);
        return a;
        }
        else{return NULL;}
    }
    void sort(int arr[],int size){
        lose = new int [size];lossize=0;
        win = new int [size];winsize=0;int i=0;arrsize=size;
    }
    void comp(node * asd){
    if (asd->depth<depth){
       if (asd->num==0){
           comp(asd->l);comp(asd->r);
           if (asd->r->num>asd->l->num){
               asd->num=asd->l->num;asd->l->num=0;
               comp(asd->l);
           }else{
               asd->num=asd->r->num;asd->r->num=0;
               comp(asd->r);
           }
       }else {
           if (Node->num>win[winnum]){win[winnum++]=Node->num;Node->num=0;}else{
               lose[losenum]=Node->num;Node->num=0;
           }
           comp()
       }
    }else{if (asd->num==0){fill(asd);}}
    }
    void fill(node * asd){
        asd->num=arr[arrnum++];
    }
    ~bintree(){
        Delete(Node);
        delete arr;
    }
    void Delete(node * a){
        node * asd=a;
        while((asd->r&&asd->l)!=NULL){
            Delete(asd->l);asd->l=NULL;Delete(asd->r);asd->r=NULL;
        }delete asd;asd=NULL;
    }
    void fuck(){
        comp(Node);
    }

};
int main() {
    bintree a(3,10);a.fuck();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
