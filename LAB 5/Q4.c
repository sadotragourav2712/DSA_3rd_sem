#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next, *prev;
};
struct node *head, *tail;

void create(int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    if (head == NULL)
    {
        head = tail = temp;
        temp->next = NULL;
        temp->prev = NULL;
    }
    else
    {
        tail->next = temp;
        temp->prev = head;
        tail = temp;
        tail->next = NULL;
    }
}

void display()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("the list is empty: \n");
    }
    else
    {
        printf("Displaying the elements: \n");
        for (temp = head; temp != NULL; temp = temp->next)
        {
            printf("%d-> ", temp->info);
        }
        printf("\n");
    }
}
void search()
{
    if (head == NULL)
    {
        printf("The list is empty:\n");
    }
}
void sort()
{
    struct node *p, *q;
    int temp;
    p = head;
    q = NULL;
    if (head == NULL)
    {
        return;
    }
    else
    {

        // converting it to for loop
        for (p = head; p != NULL; p = p->next)
        {
            for (q = p->next; q != NULL; q = q->next)
            {
                if (p->info > q->info)
                {
                    temp = p->info;
                    p->info = q->info;
                    q->info = temp;
                }
            }
        }
    }
}
void reverse()
{
    // struct node *current, *temp;
    // current = head;
    // temp =NULL;
    // while (current != NULL)
    // {
    //     temp = current->next;
    //     current->next = current->prev;
    //     current->prev = temp;

    //     current = temp;
    // }
    // temp = head;
    // head = tail;
    // tail = temp;
    struct node *current,*temp;
    int i=1;
    if(head == NULL){
        printf("the list is emtpy:\n");
    }
    else{
        
        for(current =head; current!=NULL; current = current ->next){
        temp = current;
        i++;
    }
    while(temp !=NULL){
        i--;
        printf("%d->",temp ->info);
        temp = temp->prev;

    }
    }
}
void insert_at_beg(int data2)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data2;
    temp->next = head;
    temp->prev = NULL;
    head = tail = temp;
}
void insert_at_pos(int data3, int n1)
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    p = head;
    for (int i = 0; i < n1 - 1; i++)
    {
        p = p->next;
    }
    temp->info = data3;
    temp->next = p->next;
    temp->prev = p;
    p->next = temp;
    p->next->prev = temp;
    printf("The node is inserted: \n");
}

void delete ()
{
    struct node *temp;
    temp = head = tail;
    head = head->next;
    head->prev = temp;
    temp->next = head;
    free(temp);
}

void delete_at_pos(int n2)
{
    struct node *p, *q;
    p = head;
    q = head->next;
    q->prev = p;
    for (int i = 0; i < n2 - 1; i++)
    {
        p = p->next;

        q = q->next;
        q->prev = p;
    }
    p->next = q->next;
    
    free(q);
}

void delete_at_start()
{
    struct node *temp;
    temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
}

int main()
{
    int data, n, data1, data2, ch, n1, n2, data3;
    while (1)
    {
        printf("\n1.to create a node:\n");
        printf("2.to display the data:\n");
        printf("3.To Traverse the list backward: \n");
        printf("4.To check if the list is empty:\n");
        printf("5.To insert the node at start:\n");
        printf("6.to insert node at a postion: \n");
        printf("7.To delete an element at beg:\n");
        printf("8.To delelte the element from certain position:\n");
        printf("9.to exit:\n");
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
        case 3:
            reverse();
            printf("the list has been traversed backward successfully:\n");
            break;
        case 4:

            search();
            break;

        case 5:
            printf("enter the data you want to enter at start:\n");
            scanf("%d", &data2);
            insert_at_beg(data2);
            printf("The data is inserted successfully:\n");
            break;
        case 6:
            printf("enter the postion you want to enter the data :\n");
            scanf("%d", &n1);
            printf("enter the data you want to enter:\n");
            scanf("%d", &data3);
            insert_at_pos(data3, n1);
            break;

        case 7:
            delete ();
            printf("the elemnent is deleted succesfully:\n");
            break;
        case 8:
            printf("enter the position you want to delete data from :\n");
            scanf("%d", &n2);
            delete_at_pos(n2);
            printf("the data is deleted succesfully: \n");
            break;

        case 9:
            exit(1);
            break;
        default:
            printf("Invalid Input:\n");
        }
    }
    return 0;
}