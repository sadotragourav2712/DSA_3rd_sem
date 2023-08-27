#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *right, *left;
};

struct node *create(int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->right = temp->left = NULL;
    return temp;
}

struct node *insert(struct node *root, int data)
{
    if (root == NULL)
    {
        return create(data);
    }
    if (data < root->info)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->info);
        inorder(root->right);
    }
}
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->info);
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    struct node *root = NULL;
    // int n, data;
    // printf("Enter the size of the BST:\n");
    // scanf("%d", &n);
    // printf("Enter the elements:\n");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &data);
    //     root = insert(root, data);
    // }
    root=insert(root,22);
    root=insert(root,20);
    root=insert(root,11);
    root=insert(root,33);
    root=insert(root,13);
    root=insert(root,44);
    root=insert(root,14);
    root=insert(root,55);
    root=insert(root,15);
    printf("The inorder traversal is :\n");
    inorder(root);
    printf("\nThe preorder traversal is :\n");
    preorder(root);
    return 0;
}
