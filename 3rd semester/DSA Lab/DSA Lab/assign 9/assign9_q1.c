#include<stdio.h>
#include<stdlib.h>
#define MAX3 10

int queue_arr20[MAX3];
int rear20 = -1;
int front20 = -1;


void enqueue20(int item)
{
        if( isFull20() )
        {
                printf("\nQueue Overflow\n");
                return;
        }
        if( front20 == -1 )
                front20=0;
        rear20=rear20+1;
        queue_arr20[rear20]=item ;
}

int dequeue20()
{
        int item;
        if( isEmpty20() )
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        item=queue_arr20[front20];
        front20=front20+1;
        return item;
}

int peek20()
{
        if( isEmpty20() )
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        return queue_arr20[front20];
}

int isEmpty20()
{
        if( front20==-1 || front20==rear20+1 )
                return 1;
        else
                return 0;
}

int isFull20()
{
        if( rear20 == MAX3-1 )
                return 1;
        else
                return 0;
}

void display20()
{
        int i;
        if( isEmpty20() )
        {
                printf("\nStack is empty\n");
                return;
        }
        printf("\nQueue elements :\n\n");
        for(i=front20;i<=rear20;i++)
                printf(" %d\n", queue_arr20[i] );
        printf("\n");
}




int main()
{
        int choice,item;
        int x;
        while(1)
        {
                printf("\n1. Enqueue\n");
                printf("2. Dequeue\n");
                printf("3. Check if the queue is empty\n");
                printf("4. Display element at the front\n");
                printf("5. Display all queue elements\n");
                printf("6. Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                 case 1 :
                        printf("\nEnter the item to be inserted : ");
                        scanf("%d",&item);
                        enqueue20(item);
                        break;
                 case 2:
                        item = dequeue20();
                        printf("\nDeleted item is : %d\n",item );
                        break;
                 case 3:
                        x=isEmpty20();
                        if(x==1)
                            printf("Queue is Empty\n");
                        else
                            printf("Queue is Not Empty\n");
                        break;
                 case 4:
                        printf("\nElement at the front is %d\n",peek20());
                        break;
                 case 5:
                        display20();
                        break;
                 case 6:
                        exit(1);
                 default:
                        printf("\nWrong choice\n");
                }
        }
        return 0;
}
