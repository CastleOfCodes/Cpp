#include<stdio.h>
#include<ctype.h>
void push(char a);
char pop();
int top = 0;
char stack[20];
void main()
{
    char e[20];
    char arg1, arg2;
    printf("Enter an expression(postfix notation): ");
    scanf("%s", e);
    for(int i = 0; e[i] != '\0'; i++)
    {
        if(isalpha(e[i]) != 0)
            push(e[i]);
        else
        {
            switch(e[i])
            {
            case '+':
                arg2 = pop();
                arg1 = pop();
                printf("MOV B, %c\n", arg2);
                printf("MOV A, %c\n", arg1);
                printf("ADD A, B\n");
                push('A');
                break;

            case '-':
                arg2 = pop();
                arg1 = pop();
                printf("MOV B, %c\n", arg2);
                printf("MOV A, %c\n", arg1);
                printf("SUB A, B\n");
                push('A');
                break;
            case '*':
                arg2 = pop();
                arg1 = pop();
                printf("MOV B, %c\n", arg2);
                printf("MOV A, %c\n", arg1);
                printf("MUL A, B\n");
                push('A');
                break;
            case '/':
                arg2 = pop();
                arg1 = pop();
                printf("MOV B, %c\n", arg2);
                printf("MOV A, %c\n", arg1);
                printf("DIV A, B\n");
                push('A');
                break;
            case '=':
                arg2 = pop();
                arg1 = pop();
                printf("MOV %c, %c\n", arg1, arg2);
                push('A');
                break;
            }
        }
    }
}
void push(char a)
{
    stack[top] = a;
    top++;
}
char pop()
{
    char a = stack[top - 1];
    top--;
    return a;
}
