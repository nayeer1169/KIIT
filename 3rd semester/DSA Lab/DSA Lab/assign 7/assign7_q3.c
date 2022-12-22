#include <stdio.h>
#include <stdlib.h>

struct Node15
{
    int data;
    struct Node15 *next;
    struct Node15 *prev;
};

void deleteNode(struct Node15 **head_ref, struct Node15 *del)
{
    if (*head_ref == NULL || del == NULL)
        return;
    if (*head_ref == del)
        *head_ref = del->next;
    if (del->next != NULL)
        del->next->prev = del->prev;

    if (del->prev != NULL)
        del->prev->next = del->next;
    free(del);
}

void removeDuplicates(struct Node15 **head_ref)
{
    if ((*head_ref) == NULL)
        return;

    struct Node15 *current = *head_ref;
    struct Node15 *next;

    while (current->next != NULL)
    {

        if (current->data == current->next->data)

            deleteNode(head_ref, current->next);

        else
            current = current->next;
    }
}

void push(struct Node15 **head_ref, int new_data)
{

    struct Node15 *new_node =
        (struct Node15 *)malloc(sizeof(struct Node15));

    new_node->data = new_data;

    new_node->prev = NULL;

    new_node->next = (*head_ref);

    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
}

void printList(struct Node15 *head)
{

    if (head == NULL)
        printf("Doubly Linked list empty");

    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main()
{

    struct Node15 *head = NULL;

    push(&head, 12);
    push(&head, 12);
    push(&head, 10);
    push(&head, 8);
    push(&head, 8);
    printf("Original List ");
    printList(head);

    removeDuplicates(&head);

    printf("\nList after removing duplicates ");
    printList(head);

    return 0;
}
