#include <iostream>
using namespace std;

class NODE
{
public:
    int data;
    NODE *left;
    NODE *right;

    // Default constructor
    NODE()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }

    // Parameterized constructor
    NODE(int n)
    {
        data = n;
        left = NULL;
        right = NULL;
    }
};

// Function to insert a value into a Binary Search Tree (BST)
NODE *Binary_tree(NODE *root, int val)
{
    // If the tree is empty, create a new node with the given value
    if (root == NULL)
    {
        return new NODE(val);
    }

    // If the current node's data is 0, initialize it with the value and set its children to NULL
    if (root->data == 0)
    {
        root->data = val;
        root->left = NULL;
        root->right = NULL;
    }

    // If the value to be inserted is less than current node's data, insert it in the left subtree
    if (val < root->data)
    {
        root->left = Binary_tree(root->left, val);
    }
    // Otherwise, insert it in the right subtree
    else
    {
        root->right = Binary_tree(root->right, val);
    }

    return root;
}

NODE *search(NODE *root, int key)   // SERCHING FUNCTION
{
    if (root == NULL)
        return 0;

    if (root->data == key)
    {
        return root;
    }

    if (key > root->data)
    {
        return search(root->right, key);    //recursive funtion
    }
    else
        return search(root->left, key);
    
}
NODE* inorderpredecessor(NODE* root){
    root=root->left;
    while (root->right!=NULL)
    {
        root=root->right;
    }
    return root;

}

NODE *delete_node(NODE* root,int key){
    //first we have to find the requied node value position
        NODE* ipre;
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){  //root node 
            free(root);
            return NULL;
        }
        //search for node to be deleted 
        if(key>root->data){
            root->right=delete_node(root->right,key);
        }
        else
        if(key<root->data){
            root->left=delete_node(root->left,key);
        }
        else{
            ipre=inorderpredecessor(root);
            root->data=ipre->data;
           root->left= delete_node(root->left,ipre->data);
        }
        return root;
        
}

// Function to perform in-order traversal of the BST
int inorder(NODE *root)
{
    // Base case: if the current node is NULL, return
    if (root == NULL)
    {
        return 0;
    }

    // Traverse the left subtree recursively
    inorder(root->left);

    // Print the data of the current node
    cout << root->data << " ";

    // Traverse the right subtree recursively
    inorder(root->right);
}

int main()
{
    NODE *root = NULL;
   // a.	20, 11, 5, 32, 40, 2, 4, 27, 23, 28, 50
    // Inserting multiple values into the BST
    root = Binary_tree(root,20);
    Binary_tree(root,11);
    Binary_tree(root,5);
    Binary_tree(root,32);
    Binary_tree(root,40);
    Binary_tree(root,2);
    Binary_tree(root,4);
    Binary_tree(root, 27);
    Binary_tree(root, 23);
    Binary_tree(root, 28);
    Binary_tree(root, 50);
    // Displaying the BST using in-order traversal
    cout << "Binary Search Tree Inorder Traversal:" << endl;
    inorder(root);
    // cout<<endl;
    // NODE* found=search(root,19);
    // //cout<<"element found :"<<found->data;
    delete_node(root,11);
    cout<<"after deletion of root node 11 "<<endl;
    inorder(root);
    return 0;
}
