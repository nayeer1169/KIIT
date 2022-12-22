#include <stdio.h>
#include <stdlib.h>
struct node33{
	int data;
	struct node33 *next;
};
struct node33*head33 =NULL;
struct node33*tail33 =NULL;

void Printlist33(){
	struct node33 *temp=head33;
	do{
		printf("%d",temp->next);
		temp=temp->next;
	}while (temp !=head33);
}

void insert33(int num){
	struct node33 *newNode=(struct node33*)malloc(sizeof(struct node33));
    newNode->data=num;
    newNode->next=head33;
    head33=newNode;
    printf("Inserted element:%d\n",num);
}

void deleteVal33(int value){
	struct node33 * temp=head33;
	int count = 0;
	do{
		count ++;
		temp = temp->next;
	}while (temp !=head33);
	if (count>value){
		struct node33 *temp=head33;
		do{
			temp = temp ->next;
		}while (temp->next != head33);
		temp->next = head33->next;
		free(head33);
		head33 = temp->next;
	}
}

int main(){
	insert33(1);
	insert33(2);
	insert33(3);
	insert33(4);
	insert33(5);
deleteVal33(3);
void printList33();
}

