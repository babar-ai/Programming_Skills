#include <iostream>

using namespace std;

class Node
{
public:
    int key;
    Node *left;
    Node *right;

    Node(int key)
    {
        this->key = key;
        left = right = NULL;
    }
};

class Tree
{
public:
    Node *root;

    Tree()
    {
        root = NULL;
    }

    void insertion(Node *newNode)
    {
        if (!root)
        {
            root = newNode;
            return;
        }

        Node *curr = root;

        while (1)
        {
            if (newNode->key < curr->key)
            {
                if (!curr->left)
                {
                    curr->left = newNode;
                    return;
                }
                else
                    curr = curr->left;
            }
            else
            {
                if (!curr->right)
                {
                    curr->right = newNode;
                    return;
                }
                else
                    curr = curr->right;
            }
        }
    }
};

int main()
{
    Tree tree;

    tree.insertion(new Node(10));
    tree.insertion(new Node(5));
    tree.insertion(new Node(0));
    tree.insertion(new Node(7));

    return 0;
}
