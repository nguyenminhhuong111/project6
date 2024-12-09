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
void khoitaocay(tree* tree){
	tree->root = NULL;
}
bool isEmpty(tree* tree){
	return (tree->root == NULL);
}
void themphantu(tree* tree, int data){
	//neu phan tu them vao < phan tu goc thi them vao trai, con > thi nguoc lai
        node* newnode = new node;
        newnode->data = data;
        newnode->left = NULL;
        newnode->right = NULL;
	if(isEmpty){
		tree->root = newnode;
	}
	else{
		if(data < tree->root->data){
			themphantu(tree->root->left, data)
		}
		else{
			themphantu(tree->root->right, data)
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
