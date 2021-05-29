#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char str[50];
    int count = 0;
    printf("Enter a string:");
    scanf("%[^\n]",&str);
    for (int i = 0; i < strlen(str); i++)
    {
        if(!(isdigit(str[i]) || isalpha(str[i])))
        {
            count++;
        }
    }
    printf("%d\n",count);
    

}