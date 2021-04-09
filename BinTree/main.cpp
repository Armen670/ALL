#include <iostream>
using namespace std;
struct tree{
    int a;struct tree *left;struct tree *right;
};
void add(){
    
}
void menu(){
    cout << "1.Add new value."<<endl;
    cout << "2.Output tree."<<endl;
    int a;cin >> a;
    switch (a)
        case 1:
        case 2:
    menu();
}
int main() {

    return 0;
}
