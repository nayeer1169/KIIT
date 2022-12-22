#include<stdio.h>
#include<string.h>
#include<stdlib.h>
# define MAX2 100
int top19 = -1;
char stack19[MAX2];
int isFull19() {
    return top19 == MAX2 - 1;
}

int isEmpty19() {
    return top19 == -1;
}
void push19(char item) {
    if (isFull19())
        return;
	top19++;
	stack19[top19] = item;
}
int pop19() {
    if (isEmpty19())
        return INT_MIN;

    return stack19[top19--];
}
int peek19(){
    if (isEmpty19())
        return INT_MIN;
    return stack19[top19];
}

int checkIfOperand19(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
int precedence19(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;

    case '^':
        return 3;
    }
    return -1;
}
int getPostfix19(char* expression)
{
    int i, j;

    for (i = 0, j = -1; expression[i]; ++i)
    {
        if (checkIfOperand19(expression[i]))
            expression[++j] = expression[i];
        else if (expression[i] == '(')
            push19(expression[i]);
        else if (expression[i] == ')')
        {
            while (!isEmpty19() && peek19() != '(')
                expression[++j] = pop19();
            if (!isEmpty19() && peek19() != '(')
                return -1; 
            else
                pop19();
        }
        else 
        {
            while (!isEmpty19() && precedence19(expression[i]) <= precedence19(peek19()))
                expression[++j] = pop19();
            push19(expression[i]);
        }

    }

    while (!isEmpty19())
        expression[++j] = pop19();

    expression[++j] = '\0';

}

void reverse19(char *exp){

    int size = strlen(exp);
    int j = size, i=0;
    char temp[size];

    temp[j--]='\0';
    while(exp[i]!='\0')
    {
        temp[j] = exp[i];
        j--;
        i++;
    }
    strcpy(exp,temp);
}
void brackets(char* exp){
    int i = 0;
    while(exp[i]!='\0')
    {
        if(exp[i]=='(')
            exp[i]=')';
        else if(exp[i]==')')
            exp[i]='(';
        i++;
    }
}
void InfixtoPrefix19(char *exp){

    int size = strlen(exp);

    reverse19(exp);
    brackets(exp);
    getPostfix19(exp);
    reverse19(exp);
}

int main()
{
    printf("The infix is: ");

    char expression[] = "((a/b)+c)-(d+(e*f))";
    printf("%s\n",expression);
    InfixtoPrefix19(expression);

    printf("The prefix is: ");
    printf("%s\n",expression);

    return 0;
}
