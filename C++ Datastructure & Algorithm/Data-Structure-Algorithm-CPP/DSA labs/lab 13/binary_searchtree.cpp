#include <iostream>
using namespace std;

class NODE
{
public:
    int data;
    NODE *left;
    NODE *right;

    NODE()
    {
        data = 0;
        // left, right = NULL;//wrong
        left = NULL;
        right = NULL;
    }
    NODE(int n)
    {
        data = n;
        left = NULL;
        right = NULL;
    }
};

NODE Binary_tree(NODE *root, int val)
{

    NODE *root = new NODE();
    if (root == NULL)
    {
        return new NODE(val);
    }
    if (root->data == 0)
    {
        root->data = val;
        root->left = NULL;
        root->right = NULL;
    }
    if (val < root->data)
    {
        root->left = Binary_tree(root->left, val);
    }
    else
    {
        root->right = Binary_tree(root->right, val);
    }
    return root;
}

void Inorder(NODE *root)
{

    if (root == nullptr)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << "\t";
    Inorder(root->right);
}

int main()
{
    // NODE *root=new NODE(5);
    // root->left=new NODE(3);
    // root->right=new NODE(4);
    // root->left->left=new NODE(1);
    // root->left->right=new NODE(2);
    // root->right->right=new NODE(8);
    // root->right->left=new NODE(7);
    // cout<<"Inorder traversal"<<endl;
    // Inorder(root);
    NODE *root = NULL;
    Binary_tree(root,8);
}

// struct node* search(int data){
//    struct node *current = root;
//    printf("Visiting elements: ");

//    while(current->data != data){

//       if(current != NULL) {
//          printf("%d ",current->data);

//          //go to left tree
//          if(current->data > data){
//             current = current->leftChild;
//          }//else go to right tree
//          else {
//             current = current->rightChild;
//          }

//          //not found
//          if(current == NULL){
//             return NULL;
//          }
//       }
//    }
//    return current;
// }