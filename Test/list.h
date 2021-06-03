
#ifndef LIST_H
#define LIST_H
class graph {
private:
    struct node{
        graph* pointer;
        node* next;
    };
    node Node;
    int weight;
    int num;static int statnum;
public:
    graph();

    int pass();

    void pass(graph &B, graph &A );

    void addnode(graph &B);

    graph(int m);
    void passNode(graph & A);

    void addnode(graph &,graph &);
    int Out();
    void deletelast();
    void deletethis(node *);
    void addlast();
    void deletenode (node &asd);
    ~graph();
    void deletegraph(graph*);
};


#endif LIST_H