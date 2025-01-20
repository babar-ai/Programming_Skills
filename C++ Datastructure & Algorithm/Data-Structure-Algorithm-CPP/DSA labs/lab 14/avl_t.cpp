#include <iostream>
#include <algorithm>

using namespace std;

class Node
{
public:
    int key;
    int bf;  //balancing factor
    int height;
    Node *lChild;
    Node *rChild;

    Node(int key)
    {
        this->key = key;
        bf = 0;
        height = 0;
        lChild = NULL;
        rChild = NULL;
    }

    void displayData()
    {
        cout << key << " " << bf << " " << height << endl;
    }
};

class AvlTree
{
    Node *root;

public:
    AvlTree()
    {
        root = NULL;
    }

    bool insert(Node *newNode)
    {
        if (newNode == NULL)
            return false;

        else
            root = _insert(root, newNode);

        return true;
    }

    void display()
    {
        _display(root);
    }

    void deleteNode(int key)
    {
        if (!root)
        {
            cout << "Tree is Empty" << endl;
            return;
        }

        root = _deleteNode(root, key);

        cout << root->key << endl;
    }

private:
    Node *_insert(Node *node, Node *newNode)
    {
        if (node == NULL)
            return newNode;

        if (newNode->key < node->key)
            node->lChild = _insert(node->lChild, newNode);
        else
            node->rChild = _insert(node->rChild, newNode);

        //! Update Balance Factor and Height Values.
        _update(node);

        //! Rebalance the tree
        return _balance(node);
    }

    Node *_deleteNode(Node *node, int key)
    {
        if (node == NULL)
        {
            cout << "Node with Key = " << key << " not found!" << endl;
            return NULL;
        }

        if (node->key == key)
        {
            if (node->lChild == NULL && node->rChild == NULL)
                return NULL;

            else if (!node->rChild)
                return node->lChild;

            else if (!node->lChild)
                return node->rChild;

            else
            {
                if (node->lChild->height > node->rChild->height)
                {
                    Node *successor = _findMax(node->lChild);

                    successor->lChild = _deleteNode(node->lChild, successor->key);

                    successor->rChild = node->rChild;

                    _update(successor);

                    return _balance(successor);
                }

                else
                {
                    Node *successor = _findMin(node->rChild);

                    successor->rChild = _deleteNode(node->rChild, successor->key);

                    successor->lChild = node->lChild;

                    _update(successor);

                    return _balance(successor);
                }
            }
        }

        else if (key < node->key)
            node->lChild = _deleteNode(node->lChild, key);

        else
            node->rChild = _deleteNode(node->rChild, key);

        _update(node);

        return _balance(node);
    }

    void _update(Node *node)
    {
        //? Variables for left/right subtrees heights
        int lh = -1;
        int rh = -1;

        //* These are assigned to -1 coz when the node is leaf node (no left or right subtrees),
        //* max will return -1 and it will be added to +1 so node's height will be equal to 0

        if (node->lChild)
        {
            // cout << "left shta " << node->key << " " << node->lChild->key << endl;
            lh = node->lChild->height;
        }
        if (node->rChild)
        {
            // cout << "right shta " << node->key << " " << node->rChild->key << endl;
            rh = node->rChild->height;
        }

        //! Update this node's height
        node->height = 1 + max(lh, rh);

        //! Update this node's Balance Factor
        node->bf = rh - lh;
    }

    Node *_balance(Node *node)
    {
        // cout << "Balancing" << endl;
        //! Left Heavy SubTree
        if (node->bf == -2)
        {
            cout << "left heavy of " << node->key << endl;
            if (node->lChild->bf <= 0)
            {
                cout << "Left Left Case" << endl;
                return _leftLeftCase(node); //* means right rotation
            }
            else
            {
                cout << "Left Right Case" << endl;
                return _leftRighCase(node); //* means one left then one right rotation
            }
        }

        //! Right Heavy SubTree
        else if (node->bf == 2)
        {
            cout << "right heavy of " << node->key << endl;
            if (node->rChild->bf >= 0)
            {
                cout << "Right Right Case" << endl;
                return _rightRightCase(node); //* means left rotation
            }
            else
            {
                cout << "Right Left Case" << endl;
                return _rightLeftCase(node); //* means one left then one right rotation
            }
        }

        //! Node has balance factor of -1, 0, +1,
        //* which we do not need to balance.
        return node;
    }

    Node *_leftLeftCase(Node *node)
    {
        return _rightRotate(node);
    }

    Node *_rightRightCase(Node *node)
    {
        return _leftRotate(node);
    }

    Node *_leftRighCase(Node *node)
    {
        node->lChild = _leftRotate(node->lChild);
        return _rightRotate(node);
    }

    Node *_rightLeftCase(Node *node)
    {
        node->rChild = _rightRotate(node->rChild);
        return _leftRotate(node);
    }

    Node *_rightRotate(Node *node)
    {
        Node *left = node->lChild;

        Node *temp = left->rChild;

        left->rChild = node;

        node->lChild = temp;

        // ! After rotation update balance factor and height values
        _update(node);
        _update(left);

        return left;
    }

    Node *_leftRotate(Node *node)
    {
        Node *right = node->rChild;

        Node *temp = right->lChild;

        right->lChild = node;

        node->rChild = temp;

        //! After rotation update balance factor and height values
        _update(node);
        _update(right);

        return right;
    }

    Node *_findMin(Node *node)
    {
        while (node->lChild)
            node = node->lChild;

        return node;
    }

    Node *_findMax(Node *node)
    {
        while (node->rChild)
            node = node->rChild;

        return node;
    }

    void _display(Node *node)
    {
        if (node == NULL)
            return;

        _display(node->lChild);
        // cout << node->key << " ";
        node->displayData();
        _display(node->rChild);
    }
};

int main()
{
    AvlTree avl;

    // Todo: Right Right Case Check
    
    // avl.insert(new Node(50));
    // cout << endl;
    // avl.insert(new Node(100));
    // cout << endl;
    // avl.insert(new Node(150));
    // cout << endl;
    // avl.display(); 

    // Todo: Left Left Case Check
    
    // avl.insert(new Node(50));
    // cout << endl;
    // avl.insert(new Node(20));
    // cout << endl;
    // avl.insert(new Node(10));
    // cout << endl;
    // avl.display(); 

    // Todo: Right Left Case Check
    
    // avl.insert(new Node(50));
    // cout << endl;
    // avl.insert(new Node(100));
    // cout << endl;
    // avl.insert(new Node(75));
    // cout << endl;
    // avl.display(); 

    // Todo: Left Right Case Check
    
    avl.insert(new Node(50));
    cout << endl;
    avl.insert(new Node(10));
    cout << endl;
    avl.insert(new Node(30));
    cout << endl;
    avl.display(); 

    // Todo: Deletion of a Node Test
    /**/
    // avl.insert(new Node(50));
    // avl.insert(new Node(30));
    // avl.insert(new Node(100));
    // avl.insert(new Node(40));
    // avl.insert(new Node(20));
    // cout << endl;
    // avl.display();
    // cout << endl;
    // avl.deleteNode(50);
    // avl.display();

    cout << endl;
 return 0;
}
