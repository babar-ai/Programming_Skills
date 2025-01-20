#include<iostream>
using namespace std;
#define N 5
int stack[N];
int top=-1;

int Push(int n){

    if(top==-1){
        top++;
        stack[top]=n;
    }
    else
    if(top>N){
        cout<<"stack overflow "<<endl;
    }

    else{
        top++;
        stack[top]=n;
    }
}

int Pop(){
    if(top==-1){
        cout<<"The stack is empty"<<endl;
    }
    else{
        top--;
    }
}

int print(){
    for(int i=0;i<=top;i++){
        cout<<stack[i]<<endl;
    }
}

int main(){
    
int stack[N]={2,3,4,5,6};

Push(50);
Push(80);
Push(12);
Pop();
Push(200);
Push(15);
Pop();
Push(25);
cout<<"after pop three elements from stack "<<endl;
print();

    return 0;
}