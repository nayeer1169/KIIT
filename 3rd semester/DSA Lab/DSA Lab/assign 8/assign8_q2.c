#include<stdio.h>
#include<ctype.h>

char stack[100];
int top17 = -1;

void push17(char x)
{
    stack[++top17] = x;
}

char pop17()
{
    if(top17 == -1)
        return -1;
    else
        return stack[top17--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char *e, x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    e = exp;
    
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(')
            push17(*e);
        else if(*e == ')')
        {
            while((x = pop17()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority(stack[top17]) >= priority(*e))
                printf("%c ",pop17());
            push17(*e);
        }
        e++;
    }
    
    while(top17 != -1)
    {
        printf("%c ",pop17());
    }return 0;
}

