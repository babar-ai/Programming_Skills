//dynamically memory allocation using new keyworkd 
#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the size of array"<<endl;
    cin>>n;
    int *arry;
    arry= (int*) malloc (n* sizeof (int));
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arry[i];
    }
    for(int i=0;i<n;i++){
        cout<<arry[i]<<" ";
    }
    delete(arry);
}




