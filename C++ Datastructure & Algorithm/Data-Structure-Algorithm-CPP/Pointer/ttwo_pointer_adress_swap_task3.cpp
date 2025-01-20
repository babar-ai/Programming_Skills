#include<iostream>
using namespace std;

int main(){

int a=3;
int b=4;
int *ptr1=&a;
int *ptr2=&b;
cout<<"the address of ptr1 before swaping is : "<<ptr1<<endl;
cout<<"the address of ptr2 before swaping is : "<<ptr2<<endl;
int *temp;
temp=ptr2;
ptr2=ptr1;
ptr1=temp;
cout<<endl;
cout<<"the address of ptr1 after swaping is : "<<ptr1<<endl;
cout<<"the address of ptr2 before swaping is : "<<ptr2<<endl;




}