#include <stdio.h>
#include <stdlib.h>
int stack[10], ch, n, top, value;
void push(int value)
{
    if (top > n - 1)
    {
        printf("The stack is overlflow:\n");
    }
    else
    {
        // printf("Enter the value to pushed:\n");
        // scanf("%d",&value);

        top++;
        stack[top] = value;
    }
}
void pop()
{
    if (top <= -1)
    {
        printf("The stack is under flow: \n");
    }
    else
    {
        printf("The popped element is %d", stack[top]);
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        printf("the elements in stack is:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
    else
    {
        printf("the stack is empty:\n");
    }
}
void check()
{
    if (top <= -1)
    {
        printf("The stack is empty:\n");
    }
    else
    {
        printf("The stack is not empty:\n");
    }
}
int main()
{
    top = -1;
    int ch;
    while (1)
    {
        printf("1.to Push the element\n2.to Pop \n3.To display \n4.to check if the stack is empty:\n5.to exit:\n");
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:

            printf("Enter the size of the stack:\n");
            scanf("%d", &n);
            printf("enter the elements:\n");
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &value);
                push(value);
            }
            printf("the value has been pushed into the stack:\n");
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
            printf("INvalid value:\n");
        }
    }
    return 0;
}