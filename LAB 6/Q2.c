#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};
struct node *top = NULL;

void push(int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    if (top == NULL)
    {

        temp->next = NULL;
    }
    else
    {
        temp->next = top;
    }
    top = temp;
}
void pop()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    if (top == NULL)
    {
        printf("error");
    }
    else
    {
        temp = top;
        top = top->next;
        free(temp);
    }
}
void display()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("list is empty:\n");
    }
    else
    {
        // while (temp->next != NULL)
        // {
        //     printf("%d->", temp->info);
        //     temp = temp->next;
        // }
        // // printf("%d->", temp->info);
        for (temp = top; temp != NULL; temp = temp->next)
        {
            printf("%d->", temp->info);
        }
        printf("\n\n");
    }
}
void check()
{
    struct node *temp;
    if (top == NULL)
    {
        printf("The list is empty:\n");
    }
    else
    {
        printf("the list is not empty:\n");
    }
}

int main()
{
    int data, n, ch;
    while (1)
    {
        printf("\n1.to push the element in the stack:\n2.to Pop \n3.to display\n4.to check the if list is empty:\n5.to exit:\n");
        printf("Enter your choice :\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the number of nodes: \n");
            scanf("%d", &n);
            printf("enter the element to insert:\n");
            for (int i = 0; i < n; i++)
            {

                scanf("%d", &data);
                push(data);
            }
            break;
        case 2:

            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            check();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("Invalid value:\n");
        }
    }

    return 0;
}