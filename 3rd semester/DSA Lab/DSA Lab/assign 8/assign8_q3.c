#include<stdio.h>
#include<ctype.h>

char stack18[100];
int top18 = -1;

void push18(char x)
{
    stack18[++top18] = x;
}

char pop18()
{
    if(top18 == -1)
        return -1;
    else
        return stack18[top18--];
}

int priority18(char x)
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
            push18(*e);
        else if(*e == ')')
        {
            while((x = pop18()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority18(stack18[top18]) >= priority18(*e))
                printf("%c ",pop18());
            push18(*e);
        }
        e++;
    }

    while(top18 != -1)
    {
        printf("%c ",pop18());
    }return 0;
}

