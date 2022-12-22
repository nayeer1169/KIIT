#include <stdio.h>
#include <string.h>
struct emp
{
    char name;
    char gender;
    char desig;
    char dept;
    int bp;
};
int main ()
{
    int n;
    printf("Enter total no. of employees: ");
    scanf("%d", &n);
    struct emp a[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter info of employee %d: \n", i + 1);
        printf("Name: ");
        scanf("%s", &a[i].name);
        printf("Gender: ");
        scanf("%s", &a[i].gender);
        printf("Designation: ");
        scanf("%s", &a[i].desig);
        printf("Department: ");
        scanf("%s", &a[i].dept);
        printf("Basicpay: ");
        scanf("%d", &a[i].bp);
        int gp = 0;
        gp = a[i].bp + (0.25 * a[i].bp + 0.75 * a[i].bp);
        printf("\nThe gross pay of employee %d is %d \n", i + 1, gp);
    }
    return 0;
}
