#include <iostream>

class TreeNode {
public:
    int key;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : key(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    TreeNode* root;

    TreeNode* insertRecursive(TreeNode* node, int key) {
        if (node == nullptr) {
            return new TreeNode(key);
        }

        if (key < node->key) {
            node->left = insertRecursive(node->left, key);
        } else if (key > node->key) {
            node->right = insertRecursive(node->right, key);
        }

        return node;
    }

    TreeNode* minValueNode(TreeNode* node) {
        TreeNode* current = node;
        while (current && current->left != nullptr) {
            current = current->left;
        }
        return current;
    }

    TreeNode* deleteRecursive(TreeNode* root, int key) {
        if (root == nullptr) return root;

        if (key < root->key) {
            root->left = deleteRecursive(root->left, key);
        } else if (key > root->key) {
            root->right = deleteRecursive(root->right, key);
        } else {
            if (root->left == nullptr) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            TreeNode* temp = minValueNode(root->right);
            root->key = temp->key;
            root->right = deleteRecursive(root->right, temp->key);
        }
        return root;
    }

    TreeNode* searchRecursive(TreeNode* root, int key) {
        if (root == nullptr || root->key == key) return root;

        if (key < root->key) {
            return searchRecursive(root->left, key);
        }
        return searchRecursive(root->right, key);
    }

public:
    BinaryTree() : root(nullptr) {}

    void insert(int key) {
        root = insertRecursive(root, key);
    }

    void deleteKey(int key) {
        root = deleteRecursive(root, key);
    }

    bool search(int key) {
        return searchRecursive(root, key) != nullptr;
    }
};

int main() {
    BinaryTree tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    //searching
    std::cout << tree.search(70) << std::endl;  

    // Deletetion
    tree.deleteKey(30);
    std::cout << tree.search(30) << std::endl;  

    return 0;
}
