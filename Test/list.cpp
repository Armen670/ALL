#include "iostream"
#include "list.h"
int graph::gsize=0;graph** graph::Graph=NULL;
    graph::graph(){
        statnum++;gsize++;num=statnum;
        weight=0;
        Node->next=NULL;Node->pointer=NULL;
        if(Graph){
            graph * asd[gsize-1];
            for(int i=0;i<gsize-1;i++){
                asd[i]=Graph[i];
            }
            delete Graph;
            Graph =new graph*[gsize];
            for(int i=0;i<gsize-1;i++){
                Graph[i]=asd[i];
            }Graph[gsize-1]=this;
        }else {Graph=new graph*[gsize];Graph[gsize-1]=this;}
        //std::cout <<num;
    }
    graph::graph(int m){
        statnum++;num=statnum;
        weight=m;
        Node->next=NULL;Node->pointer=NULL;
        //std::cout <<num;
    }
    graph::~graph(){
        deletegraph(this);
        /*node *asd=Node;
    while(asd->pointer){
        deletegraph(asd->pointer);
        asd=asd->next;
        if(!asd){break;}
    }*/
}
void graph::deletegraph(graph * A){
    if (A->Node){
        while(A->Node){bool a=0;
            node* asd1=A->Node;
            node * asd=asd1->pointer->Node;
            while(asd){
                if(asd->pointer->num==A->num){
                    deletethis(asd,asd1->pointer);break;
                }else{asd=asd->next;}
            }
            A->deletefirst();
            //asd1=asd1->next;
            //if (Node){break;}
            }
    }
    if (gsize>1){
        graph ** temp = new graph*[gsize-1];int j=0;
        for(int i=0;i<gsize;i++){
            if (Graph[i]!=A){temp[j++]=Graph[i];
            }
        }delete Graph;gsize--;Graph = new graph*[gsize];
        for(int i=0;i<gsize;i++){
            Graph[i]=temp[i];
        }delete temp;
    }else {
        delete Graph;Graph=NULL;
        gsize--;
    }


}//можно и нужно вместо просчёта последнего указателя и помещения в
// него следуещего елемента просто вставлять или удалять  новый элемент в начало
void graph::deletethis(node *A,graph * B){
        if (A== B->Node){
            B->deletefirst();
        }else{
            node* currNode = B->Node;
            node* prevNode = NULL;
            while (currNode != A && currNode->next != NULL) {
                prevNode = currNode;
                currNode = currNode->next;
            }
            prevNode->next = currNode->next;
            delete currNode;
        }
}
    void graph::addnode(graph *B){
    //B->Node=B->Node->next;
    //deletethis(B->Node);
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
        node * asd=Node->next;
        delete this->Node;
        Node = new node;Node=asd;
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
void graph::connect(graph *A,graph *B){
    node * asd=A->Node;bool flag=1;node *lastasd=asd;
    while(asd->pointer){
        if (asd->pointer == B){flag =0;break;}
        lastasd=asd;
        asd=asd->next;
    }
    if (flag){
        asd= new node ;
        asd->next=NULL;
        asd->pointer=B;lastasd->next=asd;
    }
    asd=B->Node;flag =1;lastasd =asd;
    while(asd){
        if(asd->pointer==B){flag=0;break;}
        lastasd=asd;
        asd=asd->next;lastasd->next=asd;
    }
    if (flag){
        asd=new node;
        asd->next=NULL;asd->pointer=A;
    }
}