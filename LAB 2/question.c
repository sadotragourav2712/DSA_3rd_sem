#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
   
    printf("The sum of no are: %d", sum(n));
    return 0;
}

int sum(int n)
{
   
    if (n != 0)
        return n + sum(n - 1);
    else 
    return n;
}