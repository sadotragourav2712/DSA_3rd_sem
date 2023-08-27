#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *head;
struct node* create(struct node *head, int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *p;
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
    return temp;
}

void insertion_sort(struct node *head, int k)
{
    struct node *temp = head;

    while (temp != NULL)
    {
            struct node *temp2 = temp->next;
            while (temp2 != NULL)
            {
                if (temp->info > temp2->info)
                {
                    int temp3 = temp->info;
                    temp->info = temp2->info;
                    temp2->info = temp3;
                }
                temp2 = temp2->next;
            }
            temp = temp->next;
        }
    }

void display(struct node *head)
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->info);
        temp = temp->next;
    }
}
int isfactor(int n, int k){
    if(n%k==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main()

{
    struct node *head = NULL;
    int n, k;
    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);
    printf("Enter the value of k:\n");
    scanf("%d",&k);
    if(isfactor(n,k)){

    printf("Enter the elements of the linked list: ");
    for (int i = 0; i < n; i++)
    {
        int data;
        scanf("%d", &data);
        head=create(head, data);
    }
    insertion_sort(head, k);
    display(head);
    }
    else{
        printf("the value  of k is not a factor of n:\n");
    }

    return 0;
}