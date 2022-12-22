#include <stdio.h>
#include <stdlib.h>
struct Node14
{
    int data;
    struct Node14 *next14;
    struct Node14 *prev14;
};
void reverse14(struct Node14 **head_ref14)
{
    struct Node14 *temp = NULL;
    struct Node14 *current = *head_ref14;
    while (current != NULL)
    {
        temp = current->prev14;
        current->prev14 = current->next14;
        current->next14 = temp;
        current = current->prev14;
    }
    if (temp != NULL)
        *head_ref14 = temp->prev14;
}

void push14(struct Node14 **head_ref14, int new_data)
{

    struct Node14 *new_node = (struct Node14 *)malloc(sizeof(struct Node14));
    new_node->data = new_data;
    new_node->prev14 = NULL;

    new_node->next14 = (*head_ref14);

    if ((*head_ref14) != NULL)
        (*head_ref14)->prev14 = new_node;

    (*head_ref14) = new_node;
}

void printList14(struct Node14 *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next14;
    }
}

int main()
{

    struct Node14 *head14 = NULL;

    push14(&head14, 2);
    push14(&head14, 4);
    push14(&head14, 8);

    printf("\n Original Linked list ");
    printList14(head14);

    reverse14(&head14);

    printf("\n Reversed Linked list ");
    printList14(head14);

}
