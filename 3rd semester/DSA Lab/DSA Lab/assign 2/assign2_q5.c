#include <stdio.h>
#include <stdlib.h>
struct course
{
    char name[50];
    int marks;
    char subject[30];
};
int main()
{
    struct course *ptr;
    int i, noOfRecords;
    printf("Enter the number of records: ");
    scanf("%d", &noOfRecords);
    ptr = (struct course *)malloc(noOfRecords * sizeof(struct course));
    for (i = 0; i < noOfRecords; ++i)
    {
        printf("\nEnter name, subject and marks of students:\n");
        scanf("%s %s %d", (ptr + i)->name, (ptr + i)->subject, &(ptr + i)->marks);
    }
    free(ptr);
    return 0;
}
