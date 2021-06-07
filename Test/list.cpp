#include "iostream"
#include "list.h"
int graph::gsize=0;
    graph::graph(){
        statnum++;gsize++;num=statnum;
        weight=0;
        Node->next=NULL;Node->pointer=NULL;
        if(Graph){
            delete Graph;
            Graph =new graph[gsize];
        }else {Graph=new graph[gsize];}
        //std::cout <<num;
    }
    graph::graph(int m){
        statnum++;num=statnum;
        weight=m;
        Node->next=NULL;Node->pointer=NULL;
        //std::cout <<num;
    }
    graph::~graph(){
    node *asd=Node;
    while(asd->pointer){
        deletegraph(asd->pointer);
        asd=asd->next;
        if(!asd){break;}
    }
}
void graph::deletegraph(graph * A){
    node* asd1=A->Node;
    while(A->Node){bool a=0;
        node * asd=asd1->pointer->Node;
        while(asd){
            if(asd->pointer->num==A->num){
                deletethis(asd,A->Node->pointer);break;
            }else{asd=asd->next;}
        }
        A->deletefirst();
        asd1=asd1->next;
        //if (Node){break;}
    }
}//можно и нужно вместо просчёта последнего указателя и помещения в
// него следуещего елемента просто вставлять или удалять  новый элемент в начало
void graph::deletethis(node *A,graph * B){
    node * asd=B->Node;int a=num;
    if (asd->next==NULL){
        delete asd;asd=NULL;
    }else {
        while(asd){
            if (asd==A){
            }else{asd=asd->next;}

        }
    }

}
    void graph::addnode(graph *B){
    //B->Node=B->Node->next;
    deletethis(B->Node,B);
        //проход по графу*/
    }
    void graph::addnode(graph &B,graph &A) {
    pass(B,A);
}
void graph::pass(graph &This,graph &Another){ //This - добавляемый узел , Another - граф вызвавший функцию
    if (!(&This==&Another)){
    bool flag=0;node* asd;//graph* A;           //Возможно главный узел изначально созданный;
        asd=This.Node;//A=This.Node.pointer;
        while(asd->pointer){
            if (asd->pointer->num==Another.num){
                flag=1;break;
            }asd=asd->next;if (!asd){break;}
        }
        if (!flag){
            asd=This.Node;int i=0;
            while(asd->pointer){i++;
                asd=asd->next;if(!asd){break;}
            }asd=This.Node;
            for(int j=0;j<(i-1);j++){
                asd=asd->next;
            }if(!(asd->next)&&asd->pointer){            //перепроверка
                This.addlast();asd=asd->next;
                asd->pointer=&Another;}else{
                asd->pointer=&Another;
            }

            asd=Another.Node;
            i=0;
            while(asd->pointer){i++;
                asd=asd->next;if(!asd){break;}
            }asd=Another.Node;
            for(int j=0;j<(i-1);j++){
                asd=asd->next;
            }
            if(!(asd->next)&&asd->pointer){  //перепроверка
                Another.addlast();asd=asd->next;
                asd->pointer=&This;}else{
                asd->pointer=&This;
            }asd=Another.Node;
            while(asd->pointer){
                pass(This,*asd->pointer);asd=asd->next;if (!asd){break;}
            }

        }

}}
    /*void graph::pass(int n,int arr[],graph &B){
        node *asd=B.Node.next;bool flag=0;
        for(int i=0;i<n;i++){
            if(num==arr[i]){
                flag=1;
            }}
        if (!flag){int * arr1=new int[n+1];
        for(int i=0;i<n;i++){
            arr1[i]=arr[i];
        }arr1[n]=num;
        Node.pointer->pass(n+1,arr1,*(Node.pointer));
            while(asd->next){
                asd=(*asd).next;(*asd).pointer->pass(n,arr1,*asd->pointer);
            }

        }

    }*/
    int graph::pass(){
        //graph A=this
        //while()
    }
    int graph::Out(){
    return num;
    }
    void graph::addlast(){
       node *asd=Node;
       int i=0;
       while(asd){i++;
           asd=asd->next;
       }asd=Node;
       for(int j=0;j<(i-1);j++){
        asd =asd->next;
       }
       asd->next= new node;
       (*asd->next).pointer=NULL;
       (*asd->next).next=NULL;

        /* node* asd=new node;
        asd->next=NULL;
        asd->pointer=NULL;
        return asd;*/
    }

    void graph::deletelast(){
        node * asd=Node;
        while(asd->next->next!=NULL){
            asd=asd->next;
        }
        delete asd->next;
        asd->next=NULL;
    }
    void graph::deletenode(node &asd){
        delete &asd;
    }
    void graph::deletefirst(){
        node *asd=Node;
        *Node=*(Node->next);
        //delete asd;
    }
int graph::statnum=0;
void graph::passNode(graph& A){
    node* asd=A.Node;
    while(asd->pointer){
        std::cout <<asd->pointer->num;
        asd=asd->next;
        if (!asd){break;}
    }
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