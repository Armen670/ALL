//
// Created by armen on 03.06.2021.
//

#ifndef TEST_MATRIXINC_H
#define TEST_MATRIXINC_H
class matrixinc{
private:
    bool** matrix;
    int node, edge;int edgenum;
    static int inc;
public:
    matrixinc(int m);
    void Out(int a);
    void connect(int a, int b);
    void connectmatrix();
    bool check(int , int );
};
#endif //TEST_MATRIXINC_H
