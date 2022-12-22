
#include <stdio.h>
#include <stdlib.h>
struct node1
{
    int data;
    struct node1 *next;
} * head1;
void initialize1()
{
    head1 = NULL;
}
void insert1(int num)
{
    struct node1 *newNode = (struct node1 *)malloc(sizeof(struct node1));
    newNode->data = num;
    newNode->next = head1;
    head1 = newNode;
    printf("inserted Element : %d\n", num);
}
void reverseLLPrint1(struct node1 *head1)
{
    if (head1 != NULL)
    {
        reverseLLPrint1(head1->next);
        printf("%d", head1->data);
    }
}
void printLinkedlist1(struct node1 *nodePtr)
{
    while (nodePtr != NULL)
    {
        printf("%d", nodePtr->data);
        nodePtr = nodePtr->next;
        if (nodePtr != NULL)
            printf("->");
        else
            printf("->NULL");
    }
}
int main()
{
    initialize1();
    insert1(6);
    insert1(2);
    insert1(3);
    insert1(2);
    insert1(4);
    printf("\n Linked List\n");
    printLinkedlist1(head1);
    printf("\nPrinting Linked List in Reversed Order\n");
    reverseLLPrint1(head1);

    return 0;
}
