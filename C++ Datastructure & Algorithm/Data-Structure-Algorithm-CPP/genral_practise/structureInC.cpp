#include<iostream>
using namespace std;

struct student 
{
    int data;
    int *ptr=&data;
    int age;

void display(){
    cout<<data<<endl;
    cout<<age<<endl;
}
}s1,s2;//global varibles 

int main(){

// struct student s1;
// s1.age=21;
// s1.data=50;
// cout<<s1.age<<endl;
// cout<<*(s1.ptr)<<endl;

s1.age=22;
s1.data=55;
// cout<<s1.age<<endl;
// cout<<s1.data<<endl;
s1.display();
}