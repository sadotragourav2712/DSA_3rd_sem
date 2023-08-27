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

int longestlength(struct node* root)
{
    if(root == NULL)
        return 0;
    
    int lheight = longestlength(root->left);
    int rheight = longestlength(root->right);

    if(lheight < rheight)
        return rheight+1;
    else
        return lheight+1;
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
    printf("\nLongest Path of tree:- %d",longestlength(root));
    return 0;
}