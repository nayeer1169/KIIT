#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * start;
void create(int n)
{
    int dat, i;
    struct node *newnd, *temp;
    start = (struct node *)malloc(sizeof(struct node));
    if (start == NULL)
        printf("Not enough space ");
    else
    {
        printf("\nEnter data for node 1:");
        scanf("%d", &dat);
        start->data = dat;
        start->next = NULL;
        temp = start;
    }
    for (i = 2; i <= n; i++)
    {
        newnd = (struct node *)malloc(sizeof(struct node));
        if (newnd == NULL)
            printf("Not enough space ");
        else
        {
            printf("Enter data for node %d:", i);
            scanf("%d", &dat);
            newnd->data = dat;
            newnd->next = NULL;
            temp->next = newnd;
            temp = temp->next;
        }
    }
    temp->next = start;
}
void traversal()
{
    struct node *ptr;
    ptr = start;
    int count = 0;
    if (ptr == NULL)
        printf("\nList is empty!");

    else
    {
        do
        {
            printf("%d-> ", ptr->data);
            ptr = ptr->next;
            count++;
        } while (ptr != start);
        // printf("%d-> ",ptr->data);

        printf("\nTotal number of nodes are :%d", count);
    }
}
void check()
{
    if (start == NULL)
        printf("\nList is empty.\n");
    else
        printf("\nList is not empty.\n");
}

void insertpos(int n)
{
    struct node *temp, *ptr;
    int dat, i = 1;
    ptr = start;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data for node:");
    scanf("%d", &dat);
    temp->data = dat;
    temp->next = NULL;
    if (n == 1)
    {
        temp->next = start;
        start = temp;
    }
    else
    {
        while (i < n - 1)
        {
            ptr = ptr->next;
            i++;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}

void delpos(int n)
{
    struct node *temp, *ptr;
    int i = 1;
    if (start == NULL)
        printf("List is empty");
    else
    {

        temp = start;
        if (start == NULL)
        {
            printf("List in empty ");
        }
        else if (n == 1)
        {
            start = start->next;
            free(temp);
        }
        else
        {
            while (i < n - 1)
            {
                temp = temp->next;
                i++;
            }
            ptr = temp->next;
            temp->next = ptr->next;
            free(ptr);
        }
    }
}
void searchins(int n, int m)
{
    struct node *temp,*prev= start,*forw;
    int i = 1;
    int flg;
    temp = start;
    prev = temp;
    do
    {
        if (temp->data == n)
        {
            flg = i;
            prev -> next = forw;
            printf("\nNode delted at %d position", i);
            break;
        }
        else
            prev = temp;
            temp = temp->next;
            forw = temp ->next;
            free(temp);
            
        printf("\nMatch not found ");
        i++;
    } while (temp != NULL);
}
void search(int n)
{
    struct node *temp;
    int i = 1;
    int flg;
    temp = start;
    do
    {
        if (temp->data == n)
        {
            printf("\nElement %d found at %d node.", n, i);

            break;
        }
        else
            temp = temp->next;
        i++;
    } while (temp != NULL);
}

int main()
{
    int choice, n;
    do
    {
        printf("\n\t1)For creation of circular link list \n");
        printf("\t2)For traversal and counting the nodes  \n");
        printf("\t3)To check if the list is empty.  \n");
        printf("\t4)For insertion node at any position  \n");
        printf("\t5)For deletion of node at any position\n");
        printf("\t6)Delete key\n");
        printf("\t7)Search\n");
        printf("\t8)To exit\n");
        printf("\nEnter Choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int tn;
            printf("\nEnter number of nodes:");
            scanf("%d", &tn);
            create(tn);
            break;
        }
        case 2:
        {
            traversal();
            break;
        }
        case 3:
        {
            check();
            break;
        }
        case 4:
        {
            int pos;
            printf("Enter position:");
            scanf("%d", &pos);
            insertpos(pos);
            break;
        }

        case 5:
        {
            int pos;
            printf("\nEnter position for deletion :");
            scanf("%d", &pos);
            delpos(pos);
            break;
        }
        case 6:
        {
            int pos, dat;
            printf("\nEnter position and data :");
            scanf("%d %d", &pos, &dat);
            searchins(pos, dat);
            break;
        }
        case 7:
        {
            int elem;
            printf("\nEnter element to be searched:");
            scanf("%d", &elem);
            search(elem);
            break;
        }

        case 8:
        {
            exit(1);
        }
        default:
            printf("\nEnter valid choice!");
        }
        printf("\nDo you wish to continue (0/1):");
        scanf("%d", &n);
    } while (n);
}
