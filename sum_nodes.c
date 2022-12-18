
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
int getsum(struct node* root)
{
    int sumleft=0,sumright=0;
    if(root==NULL)
        return 0;
    else
    {
        sumleft+=getsum(root->left);
        sumright+=getsum(root->right);
    }
    return (root->data+sumleft+sumright);
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
	printf("Sum of nodes=%d",getsum(root));


	return 0;
}





