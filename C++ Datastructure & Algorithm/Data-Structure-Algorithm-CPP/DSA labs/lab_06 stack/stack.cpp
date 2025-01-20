#include <iostream>
#define size 5
using namespace std;
class stack
{
private:
    int num[size];
    int top;

public:
    stack();
    int Push(int n);
    int pop();
    int isempty();
    int isfull();
    int displayitems();
};
stack::stack()
{
    top = -1;
}

stack::isempty()
{
    if(top==-1){
        cout<<"the stack is empty"<<endl;
    }
    else{
        
        cout<<"the stack is not empty"<<endl;
    }
    
}
stack::Push(int n){
for(int i=0;;i++)
 num[size]=n;
}
int main()
{
}