#include <stdio.h>
#include <stdlib.h>
struct node11 {
	int data;
	struct node11 *next;
};
struct node11 *head = NULL;
struct node11 *tail = NULL;
void add11 (int data){
	struct node11 *newNode = (struct node11*)malloc(sizeof(struct node11));
	
	newNode -> data = data;
	if (head == NULL){
		head = newNode;
		tail = newNode;
		newNode -> next = head; 
	}else{
		tail->next = newNode;
		tail=newNode;
		tail->next = head;
	}
}
void removeDuplicate11(){
	struct node11 *current=head,*index=NULL,*temp=NULL;
	if (head == NULL){
		printf("empty");
	}	else{
		do{
			temp = current ;
			index = current -> next;
			while (index !=head){
				if (current -> data == index ->data){
					temp -> next =index ->next;
				}else{
					temp = index;
				}
				index = index -> next;
			}
			current = current ->next;
		}
		while (current -> next != head);
	}
} 
void display11(){
	struct node11 *curr = head;
	if (head == NULL){
		printf("empty");
	}
	else{
		do{
			printf("%d",curr -> data);
			curr = curr -> next;
		}while (curr != head);
	}printf("\n");
}
int main(){
	add11(1);
	add11(3);
	add11(3);
	add11(4);
	add11(4);
	removeDuplicate11 ();
	display11();
	return 0;
}
