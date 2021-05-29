#include<stdio.h>
#include<conio.h>
void iseven(int);

void main()
{
    int num;
    char choice,y,Y;
    do
    {
        printf("enter a number:");
        scanf("%d",&num);
        iseven(num);

        printf("\nDo you want to continue? (Y/N): ");
        scanf("%s", &choice);
    } while(choice=='Y' || 'y');
    
    
}

void iseven(int num)
{
    if (num%2==0)
    {
        printf("it is an even number\n");
    }
    else
    {
        printf("it is an odd number\n");
    }
    
}