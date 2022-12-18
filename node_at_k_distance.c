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
void printdist(struct node* root, int k)
{
    if(root==NULL)
        return;
    if(k==0)
        printf("%d ",root->data);
    else
    {
        printdist(root->left,k-1);
        printdist(root->right,k-1);
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
int k;
printf("Enter the value of k");
scanf("%d",&k);
	// Function call
	printf("Nodes at %d distance=",k);
	printdist(root,k);

	return 0;
}


