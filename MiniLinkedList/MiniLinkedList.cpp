// MiniLinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

struct node
{
	int value; 
	node* left; 
	node* right; 
};

node* build_tree(node* root)
{
	root->value = 0; 
	//node* new_node = (node*)malloc(sizeof(node));
	
	//left side 
	//root->left = new_node;
	root->left->value = 1; 
	
	printf("root left node value = %d \n", root->left->value);
	//right side
	/*root->right = new_node;
	root->right->right->value = 1;*/

	return root; 
}


int main()
{
	node* root = (node*)malloc(sizeof(node)); 
	node* new_node = (node*)malloc(sizeof(node));
	root->left = new_node; 
	build_tree(root); 

	

    return 0;
}

