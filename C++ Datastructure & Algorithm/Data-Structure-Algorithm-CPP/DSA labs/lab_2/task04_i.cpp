#include<iostream>
using namespace std;
void swap(int *a,int *b){

int temp;
temp=*a;
*a=*b;
*b=temp;
cout<<"THE VALUE OF A ATFTER SWAPING :"<<*a<<endl;
cout<<"THE VALUE OF B ATFTER SWAPING :"<<*b;

}

int main(){

int a,b;
a=5;
b=10;
int &c=a;
int &d=b;
swap(&c,&d);





}
