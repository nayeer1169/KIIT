//3.
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int circularQueue22[10];
int front22 = -1, rear22 = -1, n=10;

void enqueue22(int value){
	if ((front22 == 0 && rear22 == n-1) || (front22== rear22+1)) {
		printf("The size of the queue exceeded \n");
		return;
	}
	if (front22 == -1) {
		front22 = 0;
		rear22 = 0;
	}
	else {
		if (rear22 == n - 1)
			rear22 = 0;
		else
			rear22 = rear22 + 1;
	}
	circularQueue22[rear22] = value ;
}

void dequeue22(){
	if (front22 == -1) {
		printf("Queue Underflow\n");
		return ;
	}
	printf("Element deleted is : %d ", circularQueue22[front22]);
	if (front22 == rear22) {
		front22 = -1;
		rear22 = -1;
	}
	else {
		if (front22 == n - 1)
			front22 = 0;
		else
			front22 = front22 + 1;
	}
}

void display22(){
	int f = front22, r = rear22;
	if (front22 == -1) {
		printf("Queue is empty\n");
		return;
	}
	printf("Queue Contents :\n");
	if (f <= r) {
		while (f <= r){
			printf("%d\n", circularQueue22[f]);
			f++;
		}
	}
	else {
		while (f <= n - 1) {
			printf("%d\n",circularQueue22[f]);
			f++;
		}
		f = 0;
		while (f <= r) {
			printf("%d\n",circularQueue22[f]);
			f++;
		}
	}
}

int isEmpty22(){
	return (front22 == -1);
}

int isFull22(){
	return ((front22 == 0 && rear22 == n-1) || (front22 == rear22+1));
}


int main(){
	int value,choice;


	while(1){

		printf("\n1. Add an item to the queue\n");
		printf("2. Delete an item from the queue\n");
		printf("3. Display the queue\n");
		printf("4. Exit\n");
		printf("\nSelect an option:");
		scanf("%d",&choice);
		switch(choice){
		case 1:
			printf("\nEnter a value: ");
			scanf("%d",&value);
			enqueue22(value);
			break;
		case 2:
			dequeue22();
			break;
		case 3:
			display22();
			break;
		case 4:
			exit(0);
		default:
			printf("\nWrong option\n");
		}
	}
	return 0;
}
