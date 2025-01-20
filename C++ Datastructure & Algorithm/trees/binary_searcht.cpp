#include <iostream>

using namespace std;

class Node
{
public:
    int key;
    Node *left;
    Node *right;

    Node(int key) : key(key), left(nullptr), right(nullptr) {}
};

class BinaryTree
{
public:
    Node *root;

    BinaryTree() : root(nullptr) {}

    void insert(int key)
    {
        
        Node *newNode = new Node(key);     //memory allocation for new nodes

        if (root == nullptr)
        {                                         //(!root)
            root = newNode;
            return;
        }

        Node *curr = root;                           //current node means last node
        

        while (curr != nullptr)
        {
        
            if (newNode->key < curr->key)
                if(curr->left == nullptr)
                {
                     curr->left = newNode;
                     return ;
                }
                else
                curr = curr -> left;
        
            else
                if(curr->right == nullptr){
                        curr->right = newNode;
                        return;
                }
                else
                curr = curr->right;

        }

    }

    void inorderTraversal(Node *root)
    {
        if (root == nullptr)
            return;
        inorderTraversal(root->left);
        cout << root->key << " ";
        inorderTraversal(root->right);
    }

    void inorderTraversal()
    {
        inorderTraversal(root);
    }
};

int main()
{
    BinaryTree tree;

    tree.insert(10);
    tree.insert(5);
    tree.insert(0);
    tree.insert(7);

    cout << "Inorder traversal: ";
    tree.inorderTraversal();
    cout << endl;

    return 0;
}


//orignal one 

// #include <iostream>

// using namespace std;

// class Node {
// public:
//     int key;
//     Node* left;
//     Node* right;

//     Node(int key) {
//         this->key = key;
//         left = right = NULL;
//     }
// };

// class Tree {
// public:
//     Node* root;

//     Tree() {
//         root = NULL;
//     }

//     void insertion(Node* newNode) {
//         if (root == nullptr) {
//             root = newNode;
//             return;
//         }

//         Node* curr = root;

//         while (true) {
//             if (newNode->key < curr->key) {
//                 if (curr->left == NULL) {
//                     curr->left = newNode;
//                     return;
//                 }
//                 else
//                     curr = curr->left;
//             }
//             else {
//                 if (curr->right == NULL) {
//                     curr->right = newNode;
//                     return;
//                 }
//                 else
//                     curr = curr->right;
//             }
//         }
//     }

//     void inorder_print(Node* root) {
//         if (!root) {
//             return;
//         }
//         inorder_print(root->left);
//         cout << root->key << " ";
//         inorder_print(root->right);
//     }
// };

// int main() {
//     Tree tree;

//     tree.insertion(new Node(10));
//     tree.insertion(new Node(5));
//     tree.insertion(new Node(0));
//     tree.insertion(new Node(7));

//     cout << "Inorder traversal: ";
//     tree.inorder_print(tree.root);
//     cout << endl;

//     return 0;
// }
