// Example program
#include <iostream>
#include <string>
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
matrixinc::matrixinc(int m) {
    matrix =new bool*[m];int a=(m*(m-1)/2);
    for(int i=0;i<m;i++){
        matrix[i]=new bool[a];
        for(int j=0;j<a;j++){
            matrix[i][j]=false;
        }
    }
    node =m;edge=a;
}
void matrixinc::Out(int a){
    for (int i=0;i<edgenum;i++){
        if (matrix[a][i]==true){
            for (int j=0;j<node;j++){
                if (matrix[j][i]==true&&j!=a){
                    std::cout << j;break;
                }
            }

        }
    }

}
void matrixinc::connect(int a,int b){
    matrix[a][edgenum]=1;
    matrix[b][edgenum++]=1;
}
bool matrixinc::check(int a,int b){
    for (int i=0;i<edgenum;i++){
        if (matrix[a][i]==true&&matrix[b][i]== true){
            return 1;
        }
    }
    return 0;
}
void matrixinc::connectmatrix(){
    for (int i=0;i<node;i++){
        for(int j=i+1;j<node;j++){
            if (!check(j,i)){
                matrix[j][edgenum]= true;matrix[i][edgenum++]=true;}
        }
    }
}

int main() {
    matrixinc asd(5);
    asd.connectmatrix();
    return 0;

}
