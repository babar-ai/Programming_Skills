#include<iostream>
using namespace std;

class student{

private:
string name;
int age;
public:

student(string n,int a){
    name=n;
    age=a;
}
void showdata(){
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
}

};
int main(){
student s1("baber",21);
s1.showdata();



}