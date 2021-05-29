#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char n[20],a[20];
    printf("enter a string:");
    gets(n);
    a[20]=strrev(n);
    printf("%s",n); 
}