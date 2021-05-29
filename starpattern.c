#include<stdio.h>
void main()
{
    int i,j,n,sym;
    printf("Enter the legth of the pattern:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= (n-i); j++)
        {
            printf(" ");
        }
        for ( sym = 1; sym <= ((2*i)-1); sym++)
        {
            printf("#");
        }
        printf("\n");
        
    }
    
}