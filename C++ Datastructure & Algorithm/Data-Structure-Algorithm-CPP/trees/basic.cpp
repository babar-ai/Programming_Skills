#include <iostream>

using namespace std;

class Node
{
public:
    int root;
    Node *left;
    Node *right;
    Node()
    {
        left = right = NULL;
    }

    Node(int root)
    {
        this->root = root;
        left = right = NULL;
    }

    void inorder(Node *Node)
    {
        if (Node == NULL)
            return;
        inorder(Node->left);
        cout << Node->root << " ";
        inorder(Node->right);
    }
    void preorder(Node *i){
        if(i==NULL)
        return;
        preorder()

    }

};
// 4,3,5,2,1,5
int main()
{
    Node N1;
    Node *root = new Node(4);
    Node *first = new Node(3);
    root->left = first;
    Node *second = new Node(5);
    root->right = second;
    Node *third = new Node(2);
    first->left = third;
    Node *fourth = new Node(1);
    first->right = fourth;
    Node *five = new Node(5);
    second->right = five;
    cout << "inorder" << endl;
    N1.inorder(root);
}