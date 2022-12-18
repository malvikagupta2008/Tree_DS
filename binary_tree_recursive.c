#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
    struct tree *left;
    struct tree *right;
    char val;
}treeNode;
void createTree(treeNode **node)
{
    char value=0;
    value=getchar();
    if(value=='*')
        *node=NULL;
    else
    {
        *node = (treeNode*)malloc(sizeof(treeNode));
        if(!*node)  exit(-1);
        (*node)->val=value;
        createTree(&(*node)->left);
        createTree(&(*node)->right);
    }

}
int main() {
    // insert code here...
    treeNode **node;
    createTree(&node);
    return 0;
}
