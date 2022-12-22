#include<stdio.h>
#include<stdlib.h>
#define MAX1 10

int stack_arr[MAX1];
int top = -1;



int isEmpty()
{
        if( top == -1 )
                return 1;
        else
                return 0;
}
int isFull()
{
        if( top == MAX1-1 )
                return 1;
        else
                return 0;
}
void display16()
{
        int i;
        if( isEmpty() )
        {
                printf("\nStack is empty\n");
                return;
        }
        printf("\nStack elements :\n\n");
        for(i=top;i>=0;i--)
                printf(" %d\n", stack_arr[i] );
        printf("\n");
}
void push16(int item)
{
        if( isFull() )
        {
                printf("\nStack Overflow\n");
                return;
        }
        top = top+1;
        stack_arr[top] = item;
}

int pop16()
{
        int item;
        if( isEmpty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        item = stack_arr[top];
        top = top-1;
        return item;
}
int main()
{
        int choice,item;
        int x;
        while(1)
        {
                printf("\n1. Push\n");
                printf("2. Pop\n");
                printf("3. Check if the stack is empty\n");
                printf("4. Display all stack elements\n");
                printf("5. Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                 case 1 :
                        printf("\nEnter the item to be pushed : ");
                        scanf("%d",&item);
                        push16(item);
                        break;
                 case 2:
                        item = pop16();
                        printf("\nPopped item is : %d\n",item );
                        break;
                 case 3:								
                        x=isEmpty();
                        if(x==1)
                            printf("Stack is Empty\n");
                        else
                            printf("Stack is Not Empty\n");
                        break;
                 case 4:
                        display16();
                        break;
                 case 5:
                        exit(1);
                 default:
                        printf("\nWrong choice\n");
                }
        }
        return 0;
}


