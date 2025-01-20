#include<iostream>
using namespace std;

int main(){

int i=20;
int &x=i;
int *ptr=&i;
//let me print the address of both reference and pointer variable

cout<<&x<<endl;
cout<<ptr;

}