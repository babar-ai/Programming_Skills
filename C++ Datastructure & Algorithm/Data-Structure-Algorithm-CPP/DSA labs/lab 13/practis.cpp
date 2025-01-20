#include <iostream>

using namespace std;

class NODE
{

public:
    int data;
    NODE *left, *right;

    NODE()
    {

        data = 0;
        left = NULL;
        right = NULL;
    }

    NODE(int n)
    {

        data = n;
        left = NULL;
        right = NULL;
       // cout<<"node"<<endl;
    }
};

NODE *BINARY_SEARCH(NODE *root, int valu)
{

    if (root == NULL)
    {
        return new NODE(valu);
    }

    if (root->data == 0)
    {

        root->data = valu;
    }
    if (valu < root->data)
    {
        root->left = BINARY_SEARCH(root->left, valu);
    }
    else
    {
        root->right = BINARY_SEARCH(root->right, valu);
    }
    return root;
};

int inorder(NODE *root)
{

    
    if (root == NULL)
    {
        return 0;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


int main()
{
    NODE *root = NULL;
    root=BINARY_SEARCH(root, 7); //remember this step.it is necessary to assign value to root at very fist stage because when you doest'n update the value of the root actually your are passing null value to funtion.which cause 0 disply
    BINARY_SEARCH(root, 8);
    BINARY_SEARCH(root, 6);
    BINARY_SEARCH(root, 2);
    BINARY_SEARCH(root, 9);
    inorder(root);
    //note if the resultant list of inorder traversing is in accending order than the tree will be BST.
}
