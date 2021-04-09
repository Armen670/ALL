#include <iostream>
using namespace std;
class queue{
private:
    enum {MAX=40};
    int mas[MAX];int tail=0,head=0;
public:
    queue(){}
    void put(int a){
        mas[tail++]=a;
    }
    int out(){
       return mas[head++];
    }
};
int main() {
    queue a;
    for (int i=0;i<40;i++){
        if (i%2==1)a.put(i);
    }
    for (int i=0;i<40;i++){
        if (i%2==0)cout <<a.out();
    }
    return 0;
}
