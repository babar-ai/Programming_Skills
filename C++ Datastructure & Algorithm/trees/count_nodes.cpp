#include<iostream>
#include<math.h>

using namespace std;

int Count_nodes(int n){
    int p,c;
   p= pow(2,n+1);
   c=p-1;
   return c;

}
//this is how can we find the number of the total nodes in a tree recursivly 
// int Count_nodes(Node *root) //here we must have a tree define but here this is just an example that how can we find the no of total nodes recusivly
// { //this recursive funtion is working in lab 12 see...

//     if (root == 0)
//     {
//         return 0;
//     }
//     return Count_nodes(root->left) + Count_nodes(root->right) + 1;
// };

int main(){
    int n;
    cout<<"enter the hight or depth of the tree"<<endl;
    cin>>n;
    cout<<"the total node in this tree is " <<Count_nodes(n);
    return 0;
    
}