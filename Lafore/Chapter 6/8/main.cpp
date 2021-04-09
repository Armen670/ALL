#include <iostream>
using namespace std;
class Classic{
private:
    unsigned int sernum;static unsigned int num;
public:
    Classic(){num++;sernum=num;}
    void Output(){
        cout << "Serial number:"<<sernum;cout <<endl;
    }
};
 unsigned int Classic::num=0;
int main() {
    Classic b;Classic c;Classic  d;b.Output();c.Output();d.Output();
    return 0;
}
