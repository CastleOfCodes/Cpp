/*--This is a program to find the frequency of the numbers in a
string(string consists of both letters and digits)--*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int s,j,count=0;
    char str[100];
    printf("Enter a input string:");
    gets(str);
    s=strlen(str);
    printf("The length of the string is:%d\n",s);
    char r='0';
    for(int i=0;i<=9;i++)
    {
        count=0;
        for ( j = 0; j < s; j++)
        {
            if(r==str[j])
            count++;
        }
        printf("%d",count);
        r++;
    }
}