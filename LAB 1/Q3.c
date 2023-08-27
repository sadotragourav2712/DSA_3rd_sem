#include <stdio.h>
struct student
{
    char name[50], add[50];
    int roll;
    float marks;
};
int main()
{
    int i, n;

    struct student stu[5];
    printf("Enter  name, roll no , address, marks Below: ");
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter %d student record: \n", i + 1);
        printf("Enter the name : ");
        scanf("%s", stu[i].name);
        printf("Enter the roll  no : ");
        scanf("%d", &stu[i].roll);
        printf("Enter the address : ");
        scanf("%s", stu[i].add);
        printf("Enter the marks : ");
        scanf("%f", &stu[i].marks);
    }
    printf("\nName\tRollNo\taddress\tMarks\t\n");
    for (i = 0; i < 5; i++)
        printf("%s\t%d\t%s\t%.2f\t\n", stu[i].name, stu[i].roll, stu[i].add, stu[i].marks);
    return 0;
}