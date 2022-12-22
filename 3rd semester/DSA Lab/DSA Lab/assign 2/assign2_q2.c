#include <stdio.h>
struct student
{
    char Name[50];
    int roll;
    float marks;
} s[10];
int main()
{
    int i;
    printf("Enter the information of students:\n");
    for (i = 0; i < 10; ++i)
    {
        s[i].roll = i + 1;
        printf("\nFor student %d -\n", s[i].roll);
        printf("Enter name: ");
        scanf("%s", s[i].Name);
        printf("Enter roll no: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    return 0;
}
