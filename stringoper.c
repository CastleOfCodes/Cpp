#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char str[50];
    printf("Enter a sentence to check:");
    scanf("%[^\n]",str);
    printf("%s",str);
}