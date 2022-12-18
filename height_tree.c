// C program for different tree traversals
#include <stdio.h>
#include <stdlib.h>

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
int height(struct node * root)
{
    int left,right,max;
    if(root==NULL)
        return 0;
    else
    {
        left=height(root->left);
        right=height(root->right);
        if(left>right)
            return left+1;
        else
            return right+1;
    }
}
/* Driver code*/
int main()
{
    //struct node* root=NULL;
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	// Function call
	printf("Height of a tree");
	printf("%d",height(root));


	return 0;
}

