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
    temp->left = temp->right = NULL;
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
struct node *minavluenode(struct node *root)
{
    struct node *temp;
    temp = root;
    while (temp && temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
struct node *delete (struct node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (data < root->info)
    {
        root->left = delete (root->left, data);
    }
    else if (data > root->info)
    {
        root->right = delete (root->right, data);
    }
    else
    {
       
            if (root->left == NULL)
            {
                struct node *temp;
                temp = root->right;
                free(root);
                return temp;
            }
            else if (root->right == NULL)
            {
                struct node *temp;
                temp = root->left;
                free(root);
                return temp;
            }
            struct node *temp = minavluenode(root->right);
            root->info = temp->info;
            root->right = delete (root->right, temp->info);
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
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->info);
    }
}
int main()
{
    int n, data, data1,data2, ch;
    struct node *root = NULL;
    while (1)
    {
        printf("\n1:Create Tree:\n2:Insert a node in BST:\n3.Delete a node:\n4.Inorder Traversal\n5.Preordre traverrsal \n6.Postorder traversal:\n7.To Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the size :\n ");
            scanf("%d", &n);
            printf("Enter the data:\n");
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &data);
                root = insert(root, data);
            }
            break;
        case 2:
        printf("Enter the data :\n");
        scanf("%d",&data2);
        root=insert(root,data2);
        break;

        case 3:
            printf("\nenter the data to be deleted:\n");
            scanf("%d", &data1);
            root = delete (root, data1);
            break;
        case 4:
            printf("inorder trversal :\n");
            inorder(root);
            break;
        case 5:
            printf("\npreorder traversal :\n");
            preorder(root);
            break;
        case 6:
            printf("\nPostorder traversal is:\n");
            postorder(root);
            break;
        case 7:
            exit(1);
            break;
        default:
            printf("Invalid entry:\n");
        }
    }
    return 0;
}