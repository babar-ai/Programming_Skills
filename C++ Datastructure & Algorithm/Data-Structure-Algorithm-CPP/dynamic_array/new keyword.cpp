//dynamically memory allocation using new keyworkd 
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int *ptr= new int(n);
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>ptr[i];
    }
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
    delete(ptr); 
}