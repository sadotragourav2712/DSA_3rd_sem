#include<stdio.h>
#include<stdlib.h>

struct node
{
    char data;
    struct node* left;
    struct node* right;
};

struct node* create(int key)
{
    struct node* root = malloc(sizeof(struct node));
    root->data = key;
    root->left = root->right = NULL;
    return root;
}

void singlechildnode(struct node* root)
{
    if(root == NULL)
        return;
    singlechildnode(root->left);
    if((root->left != NULL && root->right == NULL) || (root->right != NULL && root->left == NULL))
        printf(" %c ",root->data);
    singlechildnode(root->right);
}

struct node* buildtree(struct node* root)
{
    char key,ch;
    printf("\nEnter the data :- ");
    scanf("%c",&key);
    root = create(key);
    if(key == '*')
        return NULL;
    printf("\nEnter the data for inserting as left child of %c:- ",root->data);
    ch = getchar();
    root->left = buildtree(root->left);
    printf("\nEnter the data for inserting as right child of %c:- ",root->data);
    ch = getchar();
    root->right = buildtree(root->right);
    return root;    
}

int main()
{
    struct node* root = NULL;
    root = buildtree(root);
    printf("\nNode with single child:- \n");
    singlechildnode(root);
    return 0;
}