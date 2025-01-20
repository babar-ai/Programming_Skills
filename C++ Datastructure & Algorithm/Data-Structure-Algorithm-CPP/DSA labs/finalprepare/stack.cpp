#include<iostream>
using namespace std;
#define N 5

int stack[N];
int top=-1;

int Push(int n){

    if(top==-1){
        top++;
        stack[top]=n;
        return 0;
    }
    if(top>N){
        cout<<"stack overflow "<<endl;
    }
    else
    {
        top++;
        stack[top]=n;
    }
}
int Pop(){
    if(top==-1){
        cout<<"stack is empty "<<endl;
    }
    else
    {
        top--;
    }
}
void print(){
    for(int i=0;i<=top;i++){
        cout<<stack[i]<<endl;
    }
}


int main(){
    
    Push(1);
    Push(2);
    Push(3);
    Push(4);
    Push(5);
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    print();






    return 0;
}