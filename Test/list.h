
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
    int num;
    static int statnum;
public:
    graph();

    int pass();

    void pass(int n, int *arr);

    void addnode(graph *&B);

    graph(int m);
};
#endif LIST_H