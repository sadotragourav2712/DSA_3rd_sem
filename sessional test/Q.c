#include <stdio.h>
#include <stdlib.h>
struct node
{
    char info;
    struct node *left, *right;
};
struct node *newNode(char item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->info = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%c->", root->info);
        inorder(root->right);
    }
}

struct node *insert(struct node *node, char data)
{

    if (node == NULL)
        return newNode(data);

    if (data < node->info)
        node->left = insert(node->left, data);
    else
        node->right = insert(node->right, data);

    return node;
}

int main()
{
    struct node *root = NULL;
    int ch = 0;
    char data;
    int h = 0, h1 = 0;
    int n;

    while (1)
    {

        printf("1. Inserting a  Node\n2. In-order traversal\n3. to find the  (h/2) element:\n4. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the no of nodes:\n");
            scanf("%d", &n);
            printf("Enter data:\n");
            for (int i = 0; i < n; i++)
            {
                getchar();
                scanf("%c", &data);
                root = insert(root, data);
                h++;
            }
            break;
        case 2:
            if (root == NULL)
            {
                printf("Empty:\n");
                break;
            }
            inorder(root);
            printf("\n");
            break;
        case 3:
            printf("Enter the height of tree you want :");
            scanf("%d", &h1);
            h1 = h / 2;

            struct node *temp;
            temp = root;
            for (int i = 1; i <= h1; i++)
            {

                temp = temp->right;
            }
            printf("%c", temp->info);
            break;
        case 4:
            return 0;

        default:
            printf("Invalide choice\n");
            break;
        }
    }

    return 0;
}
