
// C program for different tree traversals
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
bool iscsum(struct node* root)
{
    int sum=0;
    if(root==NULL)
        return;
    if(root->left==NULL && root->right==NULL)
        return true;
    if(root->left!=NULL)
    sum+=root->left->data;
    if(root->right!=NULL)
        sum+=root->right->data;
    return (root->data==sum && iscsum(root->left) && iscsum(root->right));
}
/* Driver code*/
int main()
{
    //struct node* root=NULL;
	struct node* root = newNode(20);
	root->left = newNode(8);
	root->right = newNode(12);
	root->right->left = newNode(3);
	root->right->right = newNode(9);

	// Function call
	if(iscsum(root))
        printf("Satisfies children sum property");
    else
        printf("Does Not");


	return 0;
}




