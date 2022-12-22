
#include <stdio.h>
#include <stdlib.h>
// structure of a node
struct node2
{
    int data;
    struct node2 *next;
} * head2, *temp2;
int count = 0;
// function for inserting nodes into a list
void insert2(int val)
{
    struct node2 *newnode = (struct node2 *)malloc(sizeof(struct node2));
    newnode->data = val;
    newnode->next = NULL;
    if (head2 == NULL)
    {
        head2 = newnode;
        temp2 = head2;
        count++;
    }
    else
    {
        temp2->next = newnode;
        temp2 = temp2->next;
        count++;
    }
}
// function for displaying a list
void display2()
{
    if (head2 == NULL)
        printf("no node ");
    else
    {
        temp2 = head2;
        while (temp2 != NULL)
        {
            printf("%d ", temp2->data);
            temp2 = temp2->next;
        }
    }
}
// function for finding 3rd node from the last of a linked list
void last2(int n)
{
    int i;

    temp2 = head2;
    for (i = 0; i < count - n; i++)
    {
        temp2 = temp2->next;
    }
    printf("\n%drd node from the end of linked list is : %d", n, temp2->data);
}
int main()
{
    // creating list
    struct node *head2 = NULL;
    int n = 3;
    // inserting elements into a list
    insert2(1);
    insert2(2);
    insert2(3);
    insert2(4);
    insert2(5);
    insert2(6);
    // displaying the list
    printf("\nlinked list is : ");
    display2();
    // calling function for finding nth element in a list from last
    last2(n);
    return 0;
}
