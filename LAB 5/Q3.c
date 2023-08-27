#include <stdio.h>
#include <stdlib.h>
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
    if (head == NULL)
    {
        printf("THE LIST is empty:\n");
    }
    else
    {
        printf("Displaying the data: \n");
        for (temp = head; temp != NULL; temp = temp->next)
        {
            printf("%d-->", temp->info);
        }
    }
}
void search(int data1)
{
    struct node *temp;
    int pos = 1;
    temp = head;
    
    while (temp != NULL)
    {
        if (temp->info == data1)
        {
            printf("The element is found at %d location", pos);
        }
        else
        {
            pos++;
        }
        temp = temp->next;
    }
}

void insert_at_beg(int data2)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data2;
    temp->next = head;
    head = temp;
    
}

void insert_at_pos(int data3, int n1)
{
    struct node *temp, *q;
    temp = (struct node *)malloc(sizeof(struct node));
    q = head;
    for (int i = 0; i < n1 - 1; i++)
    {
        q = q->next;
    }
    temp->info = data3;
    temp->next = q->next;
    q->next = temp;
}

void reverse()
{
    struct node *prev, *curr;
    if (head != NULL)
    {
        prev = head;
        head = head->next;
        curr = head;

        prev->next = NULL;
        while (head != NULL)
        {
            head = head->next;
            curr->next = prev;
            prev = curr;
            curr = head;
        }
        head = prev;
    }
}
void delete ()
{
    struct node *temp;
    temp = head;
    head = head->next;
    free(temp);
}
void delete_at_pos(int n2)
{
    struct node *p, *q;
    p = head;
    q = head->next;
    for (int i = 0; i < n2 - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
}
void count()
{
    struct node *temp;
    int count = 0;
    temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    printf("the no of elements in list is %d\n", count);
}
int main()
{
    int data, data1, data2, data3, n, n1, n2, ch;
    while (1)
    {
        printf("\n1.to create a node:\n");
        printf("2.to display the data:\n");
        printf("3.To insert the node at start:\n");
        printf("4.to insert node at a postion: \n");
        printf("5.To delete an element at beg:\n");
        printf("6.To delelte the element from certain position:\n");
        printf("7.To count the number of elements in list:\n");
        printf("8.To search for an element in the linked list: \n");
        printf("9.To reverse the list : \n");
        printf("10.to exit:\n");
        printf("enter your choice: \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("enter the no of nodes you want to enter: \n");
            scanf("%d", &n);
            printf("enter the data you want to enter: \n");
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &data);
                create(data);
            }
            printf("The list is created successfully:\n");
            break;
        case 2:
            printf("the elements are : \n");
            display();
            break;
        case 8:
            printf("Enter the element you want to search :\n");
            scanf("%d", &data1);
            search(data1);
            break;

        case 3:
            printf("enter the data you want to enter at start:\n");
            scanf("%d", &data2);
            insert_at_beg(data2);
            printf("The data is inserted successfully:\n");
            break;
        case 4:
            printf("enter the postion you want to enter the data :\n");
            scanf("%d", &n1);
            printf("enter the data you want to enter:\n");
            scanf("%d", &data3);
            insert_at_pos(data3, n1);
            break;
        case 9:
            reverse();
            printf("the list is reversed successfully:\n");
            break;
        case 5:
            delete ();
            printf("the elemnent is deleted succesfully:\n");
            break;
        case 6:
            printf("enter the position you want to delete data from :\n");
            scanf("%d", &n2);
            delete_at_pos(n2);
            printf("the data is deleted succesfully: \n");
            break;
        case 7:
            count();
            break;
        case 10:
            exit(1);
            break;
        default:
            printf("Invalid Input:\n");
        }
    }
    return 0;
}