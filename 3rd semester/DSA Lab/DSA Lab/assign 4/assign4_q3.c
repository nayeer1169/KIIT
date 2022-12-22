// 3
#include <stdio.h>
#include <stdlib.h>
struct Node3
{
    int data;
    struct Node3 *next;
};
void push3(struct Node3 **head3_ref, int new_data)
{
    struct Node3 *new_node = (struct Node3 *)malloc(sizeof(struct Node3));
    new_node->data = new_data;
    new_node->next = (*head3_ref);

    (*head3_ref) = new_node;
}
int count3(struct Node3 *head3, int search_for)
{
    struct Node3 *current = head3;
    int count = 0;
    while (current != NULL)
    {
        if (current->data == search_for)
            count++;
        current = current->next;
    }
    return count;
}
int main()
{
    struct Node2 *head3 = NULL;
    push3(&head3, 4);
    push3(&head3, 1);
    push3(&head3, 2);
    push3(&head3, 1);
    push3(&head3, 6);
    printf("count of 1 is %d", count3(head3, 1));
    return 0;
}
