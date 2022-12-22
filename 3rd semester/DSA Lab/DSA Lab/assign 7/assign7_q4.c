// Implement doubly linked list using singly linked list

#include <stdio.h>
#include <stdlib.h>

struct node12
{
    int num;
    struct node12 *next;
};

void move12(struct node12 *head12)
{
    struct node12 *p, *q;
    int ch;

    p = q = head12;
    printf("\nPointer at %d\n", head12->num);
    do
    {
        printf("Select option:\n1. Move front\n2. Move back\n3. Exit\nYour choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (q->next != NULL)
            {
                q = q->next;
                printf("\nPointer at %d\n", q->num);
            }
            else
            {
                printf("\nPointer at last node %d. Cannot move ahead.\n", q->num);
            }
            break;
        case 2:
            while (p->next != q)
            {
                p = p->next;
            }
            if (p == q)
            {
                printf("\nPointer at first node %d. Cannot move behind.\n", q->num);
            }
            else
            {
                q = p;
                p = head12;
                printf("\nPointer at %d\n", q->num);
            }
            break;
        case 3:
            return;
        default:
            printf("\nInvalid choice entered. Try again\n");
        }
    } while (1);
}

void create12(struct node12 **head12)
{
    int c, ch;
    struct node12 *temp, *rear;

    do
    {
        printf("Enter number: ");
        scanf("%d", &c);
        temp= (struct node12 *)malloc(sizeof(struct node12));
        temp->num = c;
        temp->next = NULL;
        if (*head12 == NULL)
        {
            *head12 = temp;
        }
        else
        {
            rear->next = temp;
        }
        rear = temp;
        printf("Do you wish to continue [1/0]: ");
        scanf("%d", &ch);
    } while (ch != 0);
    printf("\n");
}

void display12(struct node12 *head12)
{
    struct node12 *temp;

    temp = head12;
    while (temp != NULL)
    {
        printf("%d ", temp->num);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct node12 *p = NULL, *q = NULL;
    int result, count;

    printf("Enter data into the list\n");
    create12(&p);
    printf("Displaying list:\n");
    display12(p);
    move12(p);

    return 0;
}
