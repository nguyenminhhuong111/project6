#include<iostream>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
};
struct tree{
	node* root;
};
void khoitaotree(tree* tree){
	tree->root = NULL;
}
bool isEmpty(tree* tree){
	return (tree->root == NULL);
}
void khoitaocay(tree* tree, int data){
	if(isEmpty){
		node* newnode = new node;
		newnode->data = data;
		newnode->left = NULL;
		newnode->right = NULL;
		tree->root = newnode;
	}
}
void themphantu(tree* tree, int data){
	//neu phan tu them vao < phan tu goc thi them vao trai, con > thi nguoc lai
	if(isEmpty) return;
	else{
		if(data < tree->root->data){
			node* newnode = new node;
			newnode->data = data;
			newnode->left = NULL;
			newnode->right = NULL;
			tree->root->left = newnode;
		}
		else{
			node* newnode = new node;
			newnode->data = data;
			newnode->left = NULL;
			newnode->right = NULL;
			tree->root->right = newnode;
		}
	}
}
void trungto(node* root){//trai->goc->phai
	if(root != NULL){
		trungto(root->left);
		cout<<root->data;
		trungto(root->right);
	}
}
void hauto(node* root){//trai->phai->goc
	if(root!= NULL){
		hauto(root->left);
		hauto(root->right);
		cout<<root->data;
	}
}
void tiento(node* root){
	if(root != NULL){
		cout<<root->data;
		tiento(root->left);
		tiento(root->right);
	}
}