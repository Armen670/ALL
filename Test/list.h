
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

    node * addlast();
    void deletenode (node &asd);
};


#endif LIST_H