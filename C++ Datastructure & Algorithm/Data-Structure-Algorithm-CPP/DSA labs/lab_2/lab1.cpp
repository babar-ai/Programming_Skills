#include<iostream>
using namespace std;

int main()
{

//task # 01
int a=10;
int &b=a;
cout<<a<<endl;
cout<<b<<endl;
/* int a = 5;
int b = 6;
int &p = a;
int &p = b; */ // This will throw an error of "multiple declaration is not allowed"
cout<<"value of a and b after storing 20 in b"<<endl;
b=20;
cout<<a<<endl;
cout<<b;
/* 
//task # 02
int a1=2;
int b1=3;
int &c1=a1;
int &d1=b1;

int sum1=a1+d1;
int sum2=b1+c1;
cout<<"the sum of a1+d1 :"<<sum1<<endl;
cout<<"the sum of b1+c1 :"<<sum1<<endl;
 */
//task #03
//what is difference b/w pointer and reference operator?



}