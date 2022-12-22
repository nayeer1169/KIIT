#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int cq[SIZE];
int rear23=-1;
int front23 =-1;

void insert_rear23(){
   int data;
   if((front23==0 && rear23==SIZE-1)|| (front23==rear23+1)){
    printf("Overflow\n");
   return;
}
   else{
    if(front23==-1){
   front23=rear23=0;
}
   else{
   if(rear23==SIZE-1){
   rear23=0;
}
   else{
   rear23++;
 }
}
  scanf("%d",&data);
  cq[rear23]=data;
 }
}
void insert_front23(){
   int data;
    if((front23==0 &&rear23==SIZE-1)||(front23 ==rear23+1)){
    printf("Overflow\n");
   return;
}
   if(front23==-1){
   front23=rear23=0;
}
   else if(front23==0){
   front23=SIZE-1;
}
   else{
   front23--;
}
   scanf("%d",&data);
   cq[front23]=data;
}
void delete_front23(){
    if(front23==-1){
	printf("Underflow\n");
    return;
}
    printf("The deleted element is :%d",cq[front23]);
    
	if(front23==rear23){
    front23=rear23=-1;
}
    else{
    if(front23==SIZE-1){
    front23=0;
}
    else{
    front23++;
  }
 }
}
void delete_rear23(){
    if(front23==-1){
    printf("Underflow\n");
    return;
}
    printf("The deleted element is :%d",cq[rear23]);
    if(front23==rear23){
    front23=rear23=-1;
}
    else{
    if(rear23==0){
    rear23=SIZE-1;
}
    else{
    rear23--;
  }
 }
}
void display23(){
    int front_pos=front23;
    int rear_pos=rear23;
    if(front_pos<=rear_pos){
    while(front_pos<=rear_pos){
    printf("%d",cq[front_pos]);
    front_pos++;
  }
 }
    else{
    while(front_pos<=SIZE-1){
    printf("%d",cq[front_pos]);
    front_pos++;
}   front_pos=0;
    while(front_pos<=rear_pos){
    printf("%d",cq[front_pos]);
    front_pos++;
  }
 }
}
void input_DQ(){
    int choice1;
    while(1){
    printf("\n1.Insert_rear\n2.Delete_front\n3.Delete_rear\n4.Display\n5.Quit\n");
    scanf("%d",&choice1);
    switch(choice1){
  case 1: insert_rear23();
  break;
  case 2: delete_front23();
  break;
  case 3: delete_rear23();
  break;
  case 4: display23();
  break;
  case 5: exit(1);
  default: printf("Enter valid input.");
  }
 }
}
void output_DQ(){
    int choice2;
    while(1){
    printf("\n1.Insert_rear\n2.Insert_front\n3.Delete_front\n4.Display\n5.Quit\n");
    scanf("%d",&choice2);
    switch(choice2){
  case 1: insert_rear23();
  break;
  case 2: insert_front23();
  break;
  case 3: delete_front23();
  break;
  case 4: display23();
  break;
  case 5: exit(1);
  default: printf("Enter valid input.");
  }
 }
}
int main(){
    int choice;
    printf("\n1.Input_DQ\n2.Output_DQ\n");
    scanf("%d",&choice);
    switch(choice){
  case 1:input_DQ();
  break;
  case 2:output_DQ();
  break;
  default:
  printf("Enter valid input");
}
  return 0;
} 
