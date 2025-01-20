#include<iostream>
using namespace std;

int main(){
int n;
int sum=0;
cout<<"enter how many first n NATURAL NUMBERS you want to add "<<endl;
cin>>n;
//time complexity of this program is O(N) which is very bad 
// for(int i=0;i<=n;i++){
//     sum+=i;
// }
// cout<<sum<<endl;

//anther algorithm for adding n natural numbers
//time complexity O(1)
 sum=(n*n+n)/2;
 cout<<sum<<endl;




    return 0;
}