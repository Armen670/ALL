// Example program
#include <iostream>
#include <string>
using namespace std;
class stack{
    private:enum{MAX=10};int st [MAX];int top;
    public:stack(){top=0;}
    void push(int var){st [++top]=var;}
    int pop(){return st[top--];}
    };
int main()
{
  stack s1;
  s1.push(11);
  s1.push(22);cout <<s1.pop()<<endl<<s1.pop();
}
