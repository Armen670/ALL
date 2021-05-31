struct node{
    int num;node * next,*prev;
};
using link=node*;
class doublecyclelist {
private:
    node Node;
public:
    doublecyclelist(){
        Node.next=&Node;Node.prev=&Node;Node.num=0;
        cout <<&Node<<&next<<&prev;
    }
};