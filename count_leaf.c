
// C program to count node with one child
#include <stdio.h>
#include <stdlib.h>
# include<stdbool.h>

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct node {
	int data;
	struct node* left;
	struct node* right;
};

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
struct node* newNode(int data)
{
	struct node* node
		= (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
int countleaf(struct node* root)
{
    if(root==NULL)
        return 0;
    else
    {
        if(root->left==NULL && root->right==NULL)
            return countleaf(root->left)+countleaf(root->right);
        else
            return countleaf(root->left)+countleaf(root->right)+1;
    }
}
/* Driver code*/
int main()
{
    //struct node* root=NULL;
	struct node* root = newNode(2);
	root->left = newNode(3);
	root->right = newNode(5);
	root->left->left = newNode(7);
	root->right->left = newNode(8);
	root->right->right = newNode(6);

	// Function call
	printf("No. of leaf nodes=%d",countleaf(root));


	return 0;
}







