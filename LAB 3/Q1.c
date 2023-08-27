// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
//     int i, l, t = 0;
//     char *name[20];

//     printf("enter your name: ");

//     scanf("%s", name);

//     name[20] = malloc(strlen(name) * sizeof(char *));
//     for (int i = 0; i < strlen(name); i++)
//     {
//         name[i] = malloc(strlen(name) * sizeof(char));
//     }

//         l = strlen(name);
//     for (int i = 0; i < l; i++)
//     {
//         if (name[i] != name[l - i - 1])
//         {
//             t = 1;
//             break;
//         }
//     }
//     if (t)
//     {
//         printf("%s is not a palindrome: ", name);
//     }
//     else
//     {
//         printf("%s is  palindrome: ", name);
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, count = 0;
    char *p, str[30];
    printf("Enter your characters: \n");
    scanf("%s", str);

    for (i = 0; str[i]; i++)
        count++;
    p = (char *)malloc(count * sizeof(char));
    strcpy(p, str);
    for (i = 0; i < count / 2;)
    {
        if (p[i] == p[count - i - 1])
            i++;
        else
            break;
    }
    if (i == count / 2)
        printf("\n%s is palindrome\n",p);
    else
        printf("\n%sis not palindrome\n",p);
    free(p);
    return 0;
}