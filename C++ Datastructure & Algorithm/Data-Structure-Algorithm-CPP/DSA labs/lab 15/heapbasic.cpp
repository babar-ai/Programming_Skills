#include<iostream>

using namespace std;





//this is how can we find the number of the total nodes in a tree recursivly 
// int Count_nodes(Node *root)
// {

//     if (root == 0)
//     {
//         return 0;
//     }
//     return Count_nodes(root->left) + Count_nodes(root->right) + 1;
//     //to find the sum of all the nodes just write 
//    // return Count_nodes(root->left) + Count_nodes(root->right) + root->data;
// }

int dept_tree(Node *root){
    int depth;
    if(root==0){
        return 0;
    }
   int dpl= dept_tree(root->left);
   int dpr=dept_tree(root->right);
   if(dpl>=dpr)
    depth=dpl+1;
   else
   depth=dpr+1;
   return depth;
}


int main(){
    







    return 0;
}