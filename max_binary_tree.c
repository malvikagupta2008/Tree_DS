
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
int getmax(struct node* root)
{
    int left_side,right_side,max;
    if(root==NULL)
        return -1;
    else
    {
        left_side=getmax(root->left);
        right_side=getmax(root->right);
        if(left_side>right_side)
            max=left_side;
        else
            max=right_side;
        if(max>root->data)
            return max;
        else
            return root->data;
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
	printf("Maximum node=%d",getmax(root));


	return 0;
}



