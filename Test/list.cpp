#include "iostream"
#include "list.h"

    graph::graph(){
        statnum++;num=statnum;
        weight=0;
        Node.next=NULL;Node.pointer=NULL;
        std::cout <<"WWWW";
    }
    graph::graph(int m){
        statnum++;num=statnum;
        weight=m;
        Node.next=NULL;Node.pointer=NULL;
    }
    void graph::addnode(graph &B){
        graph* A = new graph;pass(*A, B);
    /*graph* A = new graph;char asd;
        //std::cout <<"Weight of node :";std::cin>>
        A->weight=num*num;
        int * a=new int[46];
        node *NPasser=&B.Node;
        graph *GPasser=&B;
        //while(GPasser){
            //std::cout <<"Connect with node number "<<GPasser->num<<"?";
            //std::cin>>asd;
            //if (asd =='y'){
           // while(NPasser){
               A->Node.pointer=GPasser;//a[i]=GPasser->num; int i=0;
                (*GPasser).Node.pointer=A;NPasser=NPasser->next;
                //if (){GPasser=NPasser->pointer;}
            //}

            //}//GPasser=GPasser->Node.pointer;
       //};


        //проход по графу*/
    }
void graph::pass(graph &This,graph &Another){ //This - добавляемый узел , Another - граф вызвавший функцию
    if (!(&This==&Another)){
    bool flag=0;node* asd;//graph* A;           //Возможно главный узел изначально созданный;
        asd=&This.Node;//A=This.Node.pointer;
        while(asd->pointer){
            if (asd->pointer->num==Another.num){
                flag=1;break;
            }asd=asd->next;if (!asd){break;}
        }
        if (!flag){
            asd=&This.Node;int i=0;
            while(asd->pointer){i++;
                asd=asd->next;if(!asd){break;}
            }asd=&This.Node;
            for(int j=0;j<(i-1);j++){
                asd=asd->next;
            }if(!(asd->next)&&asd->pointer){
                asd->next=Another.addlast();asd=asd->next;
                asd->pointer=&Another;}else{
                asd->pointer=&Another;
            }

            asd=&Another.Node;
            i=0;
            while(asd->pointer){i++;
                asd=asd->next;if(!asd){break;}
            }asd=&Another.Node;
            for(int j=0;j<(i-1);j++){
                asd=asd->next;
            }
            if(!(asd->next)&&asd->pointer){
                asd->next=This.addlast();asd=asd->next;
                asd->pointer=&This;}else{
                asd->pointer=&This;
            }asd=&Another.Node;
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
    graph::node * graph::addlast(){
        node* asd=new node;
        asd->next=NULL;
        asd->pointer=NULL;
        return asd;
    }
    void graph::deletenode(node &asd){
        delete &asd;
    }
int graph::statnum=0;
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