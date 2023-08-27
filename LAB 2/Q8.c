#include <stdio.h>
struct student
{
    int roll;
    char name[50];
    float marks[5];
};
int main()
{
    struct student stu;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Name of the student:\n");
        scanf("%s", stu.name);
        printf("Enter the roll no of the student  \n");
        scanf("%d", &stu.roll);
        printf("Enter the marks of the 5 subjects: \n");
        for (int i = 0; i < 5; i++)
        {

            scanf("\n%f", &stu.marks[i]);
        }
    }
    printf("Displaying information student : ");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d student : ",i+1 );
        printf("\nName: %s", stu.name);
        printf("\nroll no : %d", stu.roll);
        printf("\nmarks:");
        for (int i = 0; i < 5; i++)
        {
            printf("\n%.2f", stu.marks[i]);
        }
    }
    return 0;
}