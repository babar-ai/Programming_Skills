// program for traversing a simple binary tree
// 1)inorder
// 2)post order
// 3)preorder

#include <iostream>

using namespace std;

// Definition of the Node class representing a node in a binary tree
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Default constructor for initializing the node with zero
    Node()
    {
        data = 0;
        left = right = NULL;
    }

    // Constructor for initializing the node with a specific value
    Node(int n)
    {
        data = n;
        left = NULL;
        right = NULL;
    }
};

// Function for preorder traversal (NLR: Node, Left subtree, Right subtree)
void Preorder(Node *root)
{
    if (root == nullptr)
    {
        return; // Base case: stop if the node is null
    }

    cout << "\t" << root->data; // Process the current node
    Preorder(root->left);       // Recursively traverse the left subtree
    Preorder(root->right);      // Recursively traverse the right subtree
}

// Function for inorder traversal (LNR: Left subtree, Node, Right subtree)
void INORDER(Node *root)
{
    if (root == nullptr)
    {
        return; // Base case: stop if the node is null
    }

    INORDER(root->left);        // Recursively traverse the left subtree
    cout << "\t" << root->data; // Process the current node
    INORDER(root->right);       // Recursively traverse the right subtree
}

// Function for postorder traversal (LRN: Left subtree, Right subtree, Node)
void POSTORDER(Node *root)
{
    if (root == nullptr)
    {
        return; // Base case: stop if the node is null
    }

    POSTORDER(root->left);      // Recursively traverse the left subtree
    POSTORDER(root->right);     // Recursively traverse the right subtree
    cout << "\t" << root->data; // Process the current node
}

//this is how can we find the number of the total nodes in a tree recursivly 
int Count_nodes(Node *root)
{

    if (root == 0)
    {
        return 0;
    }
    return Count_nodes(root->left) + Count_nodes(root->right) + 1;
    //to find the sum of all the nodes just write 
   // return Count_nodes(root->left) + Count_nodes(root->right) + root->data;
};

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

int main()
{
    // Creating a binary tree: 4, 3, 2, 5, 1, 6, 7
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->left->right = new Node(1);
    root->right->left = new Node(7);
    root->right->right = new Node(6);

    // Displaying inorder traversal
    cout << "INORDER TRAVERSAL :";
    INORDER(root);
    cout << endl;

    // Displaying preorder traversal
    cout << "PREORDER TRAVERSAL :";
    Preorder(root);
    cout << endl;

    // Displaying postorder traversal
    cout << "POSTORDER TRAVERSAL :";
    POSTORDER(root);
    cout << endl;
    cout << "the total number of nodes is :" << Count_nodes(root);
    cout<<endl;
    cout << "the dept of the node is :" << dept_tree(root);

    return 0;
}
