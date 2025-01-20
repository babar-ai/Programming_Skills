#include<iostream>

using namespace std;

int fibonachi(int i){

if(i==0){
return 0;
}
if(i==1){
    return 1;
}

return fibonachi(i-1)+fibonachi(i-2);

}

int main(){
    
    //fibonachi series ->  0 1 1 2 3 5 8 

int i;
cout<<"enter any number to find the fibonachii "<<endl;
cin>>i;
cout<<"The fibonachii of "<<i<<" is "<< fibonachi(i);

    return 0;
}