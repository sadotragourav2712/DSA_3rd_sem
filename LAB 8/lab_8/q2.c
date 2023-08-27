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

void preorder(struct node* root)
{
    if(root == NULL)
        return;
    printf(" %c ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node* root)
{
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf(" %c ",root->data);
}

void inorder(struct node* root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    printf(" %c ",root->data);
    inorder(root->right);
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
    printf("\nPreoder Traversal\n");
    preorder(root);
    printf("\nPostoder Traversal\n");
    postorder(root);
    printf("\nInoder Traversal\n");
    inorder(root);
    return 0;
}