#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *left, *right;
    int height;
};
struct node *create_tree()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    int data;
    printf("Enter the Data:\n");
    scanf("%d", &data);
    if (data == 0)
    {
        return 0;
    }
    else
    {
        temp->info = data;
        printf("Enter the left child of the %d\n", data);
        temp->left = create_tree();
        printf("Enter the right child of the %d\n", data);
        temp->right = create_tree();

        return temp;
    }
}

void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d ", root->info);
        inorder(root->right);
    }
}
void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printf("%d ", root->info);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->info);
    }
}

int main()
{
    struct node *root;
    root = 0;
    root = create_tree();
    printf("Inorder traversal is:\n");
    inorder(root);
    printf("\n");
    printf("Pre-order traversal is:\n");
    preorder(root);
    printf("\n");
    printf("postorder traversal is :\n");
    postorder(root);

    return 0;
}
