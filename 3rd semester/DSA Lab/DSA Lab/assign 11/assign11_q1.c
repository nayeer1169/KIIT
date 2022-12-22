#include <stdio.h>
#include <stdlib.h>


struct bstNode55{
    int value;
    struct bstNode55 *left55;
    struct bstNode55 *right55;
}*root55 = NULL,*temp=NULL,*t2,*t1;

void create55(){
    int data;

    printf("Enter data of node to be inserted :");
    scanf("%d",&data);
    temp=(struct bstNode55 *)malloc(sizeof(struct bstNode55));
    temp->value;
    temp->left55 = temp->right55 = NULL;
}
void inOrder55(struct bstNode55 *root55){
    if (root55==NULL){
    printf("No elements in tree to display");
    return;
    }
    else{
    if ((root55->left55!=NULL) && (root55->left55 > root55)){
    inOrder55(root55->left55);
    }
    printf("%d->",root55->value);
    if((root55->right55!=NULL) && (root55->right55 > root55)){
    inOrder55(root55->right55);
    }
    }
}
void preOrder55(struct bstNode55 *root55){
    if (root55 == NULL){
        printf("No elements in tree to display");
        
    }
    else{
    printf("%d->",root55->value);
    if((root55->left55!=NULL) && (root55->left55 > root55)){
    preOrder55(root55->left55);
    }
    if((root55->right55!=NULL) && (root55->right55 > root55)){
    preOrder55(root55->right55);
    }
    }
}
void postOrder55(struct bstNode55 *root){
    if (root = NULL){
        printf("No element in tree to display");
        
    }
    else{
    if((root->left55=NULL) && (root->left55 > root)){
    postOrder55(root->left55);
    }

    if((root->right55=NULL) && (root->right55 > root)){
    postOrder55(root->right55);
    }
    printf("%d->",root->value);
    }
}
void search55(struct bstNode55 *root){
    if ((temp->value > root->value)&&(root->right55 != NULL))
    search55(root->right55);
    else if((temp->value > root->value)&&(root->right55 == NULL))
    root->right55=temp;
    else if((temp->value > root->value)&&(root->left55 != NULL))
    search55(root->left55);
    else if((temp->value > root->value)&&(root->left55 == NULL))
    root->left55=temp;
}
int smallest55(struct bstNode55 *root55){
    t2=root55;
    if(root55->left55!=NULL){
        t2=root55;
        return (smallest55(root55->left55));
    }
    else
    return (root55->value);
}
int largest55(struct bstNode55 *root55){
    if(root55->right55=NULL){
        t2=root55;
        return (largest55(root55->right55));
    }
    else 
    return (root55->value); 
}
void delete55(){
    int data;

    if(root55 == NULL){
        printf("No elements in tree to display:");
        return;
    }
    printf("Enter data to be deleted ");
    
    t1=root55;
    t2=root55;
    
}
int main(){
    int ch;
    printf("\nOPERATION--::--");
    printf("\n1- Create a tree");
    printf("\n2- inOrder Treversal\n");
    printf("\n3- preOrder Traversal\n");
    printf("\n4- postOrder Traversal\n");
    printf("\n5- seacrh\n");
    printf("\n6- Smallest number in tree \n");
    printf("\n7- Largest number in tree \n");
    printf("\n8- Delete an element from tree\n");
    printf("\n9- Quit\n");
    while(1){
        printf("\nEnter your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            create55();
            break;
            
            case 2:
            inOrder55(root55);
            break;


            case 3:
            preOrder55(root55);
            break;

            case 4:
            postOrder55(root55);
            break;

            case 5:
            search55(root55);
            break;

            case 6:
            smallest55(root55);
            break;

            case 7:
            largest55(root55);
            break;

            case 8:
            delete55();
            break;
 
            case 9:
            exit(0);
            break;

            default:
            printf("Wrong choice, Please enter correct choice");
            break;            
        }
    }
}
