
#ifndef LIST_H
#define LIST_H
class graph {
private:
    struct node{
        graph* pointer;
        node* next;
    };
    node* Node=new node;
    int weight;
    int num;static int statnum;
    graph * Graph=NULL;static int gsize;
public:
    graph();

    int pass();

    void pass(graph &B, graph &A );

    void addnode(graph *);

    graph(int m);
    void passNode(graph & A);

    void addnode(graph &,graph &);
    int Out();
    void deletelast();
    void deletefirst();
    void deletethis(node *,graph *);
    void addlast();
    void deletenode (node &asd);
    ~graph();
    void deletegraph(graph*);
};


#endif LIST_H