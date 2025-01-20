
//C++ course code of the implementation of simple binary trees with traversal function has been provided.
#include<iostream>
using namespace std;

struct tree_node{
	int data;
	tree_node* left;
	tree_node* right;
};

void inorder(tree_node* node){
	if(node == NULL)
		return;
	
	inorder(node->left);
	cout<<"\t"<<node->data;
	inorder(node->right);
}

void preorder(tree_node* node){
	if(node == NULL)
		return;

	cout<<"\t"<<node->data;
	preorder(node->left);
	preorder(node->right);
}

void postorder(tree_node* node){
	if(node == NULL)
		return;

	postorder(node->left);
	postorder(node->right);
	cout<<"\t"<<node->data;
}


int main(){
	tree_node* root = new tree_node;
	root->data = 1;
	root->left = NULL;
	root->right = NULL;
	
	tree_node* tmp = new tree_node;
	tmp->data = 7;
	tmp->left = NULL;
	tmp->right = NULL;
	
	root->left = tmp;
	
	tree_node* tmp1 = new tree_node;
	tmp1->data = 5;
	tmp1->left = NULL;
	tmp1->right = NULL;
	
	root->right = tmp1;
	
	tree_node* tmp2 = new tree_node;
	tmp2->data = 151;
	tmp2->left = NULL;
	tmp2->right = NULL;
	
	tmp1->left = tmp2;
	
	tree_node* tmp3 = new tree_node;
	tmp3->data = 3;
	tmp3->left = NULL;
	tmp3->right = NULL;
	
	tmp->right = tmp3;
	
	cout<<"\nInorder Traversal: ";
	inorder(root);
	
	cout<<"\nPreorder Traversal: ";
	preorder(root);
	
	cout<<"\nPostorder Traversal: ";
	postorder(root);

	return 0;
}