#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, no;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the Element: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("Enter the element to be searched: \n");
    scanf("%d", &no);

    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) == no)
        {
            printf("Element found: %d", no);
        }
    }

    return 0;
}