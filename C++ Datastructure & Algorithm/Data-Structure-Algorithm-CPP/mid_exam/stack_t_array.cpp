#include<iostream>
using namespace std;
#define N 5

int stack[N];
int top = -1;

void Push(int i)
{
    top++;
    stack[top] = i;
}
void Pop()
{
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }
    else{
        --top;
    }
}
void print(){

    for(int i=0;i<=top;i++){
        cout<<stack[i]<<endl;
    }
}
int main()
{
    Push(1);
    Push(2);
    Push(3);
    print();
    Pop();
    cout<<"*************"<<endl;
    print();
}