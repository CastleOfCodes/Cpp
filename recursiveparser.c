#include<stdio.h>
#include<ctype.h>
void E();
void E1();
void T();
void T1();
void F();


int i = 0;
char p[10];
void E()
{
    T();
    E1();
}
void E1()
{
    if((p[i] == '+') || (p[i] =='-'))
    {
        i++;
        T();
        E1();
    }
}
void T()
{
    F();
    T1();
}
void T1()
{
    if((p[i] == '*') || (p[i] =='/'))
    {
        i++;
        T();
        T1();
    }
}
void F()
{
    if(p[i] == '(')
    {   
        i++;
        E();
        if(p[i] == ')')
            i++;
    }
    else if(isalnum(p[i]))
        i++;
}

void main()
{
    printf("Enter the statement:");
    scanf("%[^\n]",p);
    while(p[i] != '\0')
    {
        E();
        if(p[i] == '\0')
        {
            printf("Accepted!");
            break;
        }
        else
        {
            printf("Cannot be accepted!");
            break;
        }
    }
}
