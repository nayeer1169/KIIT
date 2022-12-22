#include <stdio.h>
#include <stdlib.h>
struct Node13
{
    int data;
    struct Node13 *next13;
    struct Node13 *prev13;
};

void push13(struct Node13 **head_ref13, int new_data)
{

    struct Node13 *new_node = (struct Node13 *)malloc(sizeof(struct Node13));
    new_node->data = new_data;
    new_node->prev13 = NULL;

    new_node->next13 = (*head_ref13);

    if ((*head_ref13) != NULL)
        (*head_ref13)->prev13 = new_node;

    (*head_ref13) = new_node;
}

void printList13(struct Node13 *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next13;
    }
}

int main()
{

    struct Node13 *head = NULL;

    push13(&head, 2);
    push13(&head, 4);
    push13(&head, 8);
    printf("\nLinked list ");
    printList13(head);
}
