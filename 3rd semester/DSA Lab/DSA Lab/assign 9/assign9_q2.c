#include <stdio.h>
#include <stdlib.h>

struct Node21 {
    int data;
    struct Node21 *next;
}*front21,*rear21,*temp21,*front121;

struct Node21*rear21 = NULL;
struct Node21*front21 = NULL;

void enqueue21(int value){
    if (rear21 == NULL){
        rear21 = (struct Node21 *)malloc(sizeof(struct Node21));
        rear21->next = NULL;
        rear21->data = value;
        front21 = rear21;
    }
    else{
        temp21=(struct Node21 *)malloc(sizeof(struct Node21));
        rear21->next = temp21;
        temp21->data = value;
        temp21->next = NULL;
        rear21 = temp21;
    }
    printf("Node is Inserted\n");
}

void dequeue21(){
    front121 = front21;
    if (front121 == NULL){
        printf("\n Queue underflow");
        return;
    }
    else
        if (front121->next != NULL)
        {
            front121 = front121->next;
            printf("\nDequed value : %d\n", front21->data);
            free(front21);
            front21 = front121;
        }
        else
        {
            printf("\nDequed value : %d\n", front21->data);
            free(front21);
            front21 = NULL;
            rear21 = NULL;
        }
}

void check21(){
    if ((front21 == NULL) && (rear21 == NULL))
        printf("\nQueue empty\n");
    else
       printf("\nQueue not empty\n");
}

void display21(){
    front121 = front21;
    if ((front121 == NULL) && (rear21 == NULL)){
        printf("Queue is empty");
        return;
    }
    while (front121 != rear21){
        printf("%d -> ", front121->data);
        front121 = front121->next;
    }
    if (front121 == rear21)
        printf("%d -> NULL\n\n", front121->data);
}

int main() {
    int choice, value;
    printf("\nImplementation of Queue using Linked List\n");
    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. To check\n4. Display\n5. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &value);
            enqueue21(value);
            break;
        case 2:
            dequeue21();
            break;
        case 3:
            check21();
            break;
        case 4:
            display21();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
}
