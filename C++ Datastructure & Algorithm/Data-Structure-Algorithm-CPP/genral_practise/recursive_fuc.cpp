#include<iostream>
using namespace std;

int fun(int x){
if(x==0)
return 0;
else
return 2*fun(x-1)+x*x;

}
int main(){
int x=5;
cout<<fun(1);



}