#include <stdio.h>
#include <stdlib.h>
int c = 0;
struct node
{
    int info;
    struct node *next;
};
struct node *head;
void create(int data)
{
    struct node *temp, *q;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->info = data;
    temp->next = NULL;
    if (head == NULL)
    {

        head = temp;
    }

    else
    {
        q = head;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = temp;
    }
}
void display()
{
    struct node *temp;
    for (temp = head; temp != NULL; temp = temp->next)
    {
        printf("%d-->  ", temp->info);
    }
}
int count(struct node*head)
{
    
    struct node *temp;

    temp = head;
    if (head == NULL)
    {
        printf("the list is empty:\n");
    }
    else
    {
        temp = temp->next;
        c++;
        }
        return (count(head->next));

        printf("no of elements are: %d \n", c);
    }
// int count(struct node *heads){
//     if(heads==NULL)
//         return 0;
//     else
//         return (1+count(heads->next));
// }

int main()
{
    int n, data;
    printf("enter the size of the linked  list :\n");
    scanf("%d", &n);
    printf("enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        create(data);
    }
    display();
    printf("\nthe no of nodes are %d\n",count(head));

    return 0;
}