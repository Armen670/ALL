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
    bintree(int size,int arrs){
        depth=size;Node =(newnode(size));arrsize=arrs;
        arr = new int [arrsize];
        win = new int [arrsize];winnum=0;
        lose = new int [arrsize];losenum=0;
        for (int i=0;i<arrsize;i++){
            win[i]=0;lose[i]=0;
        }arrnum=0;
        for (int i=arrsize-1;i>=0;i--){
            arr[i]=i*i;
        }
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
               //if (arrsize!=arrnum){
               if (asd->l->num==0||asd->r->num==0){
                   if (asd->l->num==0){asd->num=asd->r->num;asd->r->num=0;
                       comp(asd->r); }else {asd->num=asd->l->num;asd->l->num=0;
                       comp(asd->l);}
               }else{
                   if (asd->r->num>asd->l->num){
                       asd->num=asd->l->num;asd->l->num=0;
                       comp(asd->l);
                   }else{
                       asd->num=asd->r->num;asd->r->num=0;
                       comp(asd->r);
               }

               }//}else{if(asd->l==0))

           //}

       }else {
           if (asd==Node){if (Node->num>win[winnum]){win[winnum++]=Node->num;Node->num=0;}else{
               lose[losenum]=Node->num;Node->num=0;
           }
           comp(Node);
       }else {comp(asd->r);comp(asd->l);}
    }}else{if (asd->num==0){fill(asd);}}


    }
    void fill(node * asd){
        if(arrnum!=arrsize){asd->num=arr[arrnum++];}
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
        bool a;//std::cout <<empty(Node);Node->num=45;std::cout <<empty(Node);
        while (arrnum!=arrsize||(!empty(Node))){
            comp(Node);a=empty(Node);
        }
        for(int i=0;i<winnum;i++){
            std::cout <<win[i]<<std::endl;

        }std::cout <<std::endl;
        //for(int i=0;i<arrsize;i++){
        //    std::cout <<arr[i];
        //}

    }
    bool empty(node *asd){
        if (asd->num==0){
            if (asd->depth!=depth){if ((empty(asd->r))&&(empty(asd->l))){return 1;}else {return 0;}}
        }else {return 0;}
    }
    bool Empty(){
    }


};
int main() {
    bintree a(3,30);a.fuck();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
