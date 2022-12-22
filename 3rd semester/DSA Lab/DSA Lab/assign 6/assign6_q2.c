#include <stdio.h>
#include <stdlib.h>
struct node22{
	int data;
	struct node22 *next;
};
struct node22 *head22=NULL;
struct node22 *tail22=NULL;

void printList22 (){
	struct node22 *temp=head22;
	do{
		printf("%d",temp->data);
		temp = temp -> next;
	} while (temp != head22);
}

void insert22 (int data){
	struct node22 *newNode =(struct node22 *)malloc(sizeof(struct node22*));
	newNode -> data = data;
	newNode -> next = head22;
	head22 = newNode;
	printf("Inserted Element : %d\n",data);
}

void swapNodes22 (int key1, int key2){
	struct node22 * temp = head22;
	struct node22 * prev1 = NULL;
	struct node22 * prev2 = NULL;
	struct node22 * node1 = NULL;
	struct node22 * node2 = NULL;
	do {
		if (temp->data ==key1){
			node1 = temp;
			break;
		}
		prev1=temp;
		temp=temp->next;
	}while (temp != head22);
	temp = head22;
	do{
		if(temp->data==key2){
			node2= temp;
			break;
		}
		prev2 = temp;
		temp = temp -> next;
	}while (temp !=head22);
	if (node1==NULL|| node2==NULL){
		printf("Invalid");
		return ;
	}
	if (prev1 != NULL){
		prev1 ->next = node2;
	}else{
		head22= node2;
	}
if (prev2 != NULL){
   prev2 -> next=node1;	
}else{
	head22 = node1;
}
struct node22 *temp1=node1->next;
node1->next = node2->next;
node2->next = temp1; 
}
int main(){
	insert22(1);
	insert22(2);
	insert22(3);
	insert22(4);
	insert22(5);
swapNodes22(1,3);
printList22();
}
