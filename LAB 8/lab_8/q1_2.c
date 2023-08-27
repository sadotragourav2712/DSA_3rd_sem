#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node* left;
    struct node* right;
};
// A B D * * E F * * * C G * * H J L * * * K * *
struct node* create(int key)
{
    struct node* root = malloc(sizeof(struct node));
    root->data = key;
    root->left = root->right = NULL;
    return root;
}
void printGivenLevel(struct node* root, int level)
{
    if (root == NULL)
    {
        printf(" - ");
        return;
    }
    if (level == 1)
        printf(" %c ", root->data);
    else if (level > 1) {
        printGivenLevel(root->left, level - 1);
        printGivenLevel(root->right, level - 1);
    }
}
int height(struct node* node)
{
    if (node == NULL)
        return 0;
    else {
        int lheight = height(node->left);
        int rheight = height(node->right);
        if (lheight > rheight) {
            return (lheight + 1);
        }
        else {
            return (rheight + 1);
        }
    }
}
void printLevelOrder(struct node* root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++) {
        printGivenLevel(root, i);
        printf("\n");
    }
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
    printf("\nLevel order traversal:- \n");
    printLevelOrder(root);
}