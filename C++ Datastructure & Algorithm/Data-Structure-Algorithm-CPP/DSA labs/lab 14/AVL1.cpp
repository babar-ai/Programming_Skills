#include <iostream>
#include <algorithm>
using namespace std;

class Node
{

public:
    int key;
    Node *left;
    Node *right;
    int height;

    Node(int valu)
    {
        key = valu;
        left = NULL;
        right = NULL;
        height = 1;
    }
};

// to get the higt of the tree
int getheight(Node *n)
{
    if (n == NULL)

        return 0;
    return n->height;
}

int getbalaceFactor(Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return getheight(n->left) - getheight(n->right);
}
// importan
//  LLR
Node *Right_rotate(Node *y) // "y indicate that that root node of the tree is y"
{
    Node *x = y->left; // this define left-right rotation
    Node *T2 = x->right;
    // by performing right rotation
    
    x->right = y;
    y->left = T2;

    y->height = max(getheight(y->right), getheight(y->left) + 1);
    x->height = max(getheight(x->right), getheight(x->left) + 1);
    return x;
}
// RRL
Node *Left_rotate(Node *x)
{
    Node *y = x->right; // this define left-right rotation
    Node *T2 = y->left;
    // by performing right rotation

    y->left = x;
    x->right = T2;

    y->height = max(getheight(y->right), getheight(y->left) + 1);
    x->height = max(getheight(x->right), getheight(x->left) + 1);
    return y;
}
// simple binary search insertion

Node *Insertion(Node *root, int key) // this funtion will insert nodes into binary tree plus perform balacing job of nodes this property make this AVL.
{
    if (root == NULL)
    {
        return new Node(key);
    }
    if (key > root->key)
    {
        root->right = Insertion(root->right, key);
    }
    else

        root->left = Insertion(root->left, key);
    // return root;

    root->height = max(getheight(root->left), getheight(root->right) + 1);
    // now we can find the balancing factor of the inserted node
    int bf = getbalaceFactor(root);

    // 4 cases;
    // 1. Left Left case
    if (bf > 1 && key < root->left->key)
    {
        return Right_rotate(root);
    }
    // 2. Right Right case
    if (bf < -1 && key > root->right->key)
    {
        return Left_rotate(root);
    }
    // 3. left Right case
    if (bf > 1 && key > root->left->key)
    {
        root->left = Left_rotate(root);
        return Right_rotate(root);
    }
    // 4. Right lift case
    if (bf > 1 && key < root->right->key)
    {

        root->left = Left_rotate(root->left);
        return Left_rotate(root);
    }

    return root;
}
int preoder(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    cout << root->key << " ";
    preoder(root->left);
    preoder(root->right);
}
int inorder(Node *root)
{
    // Base case: if the current node is NULL, return
    if (root == NULL)
    {
        return 0;
    }

    // Traverse the left subtree recursively
    inorder(root->left);

    // Print the data of the current node
    cout << root->key << " ";

    // Traverse the right subtree recursively
    inorder(root->right);
}

int main()
{
    Node *root = NULL;
    root = Insertion(root, 14);
    Insertion(root, 17);
    Insertion(root, 11);
    Insertion(root, 7);
    Insertion(root, 53);
    Insertion(root, 4);
    Insertion(root, 13);
    Insertion(root, 12);
    Insertion(root, 8);
    cout << "This is the Requarid selfbalancing + BST tree" << endl;
    inorder(root);
}