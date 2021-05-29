#include <stdio.h>
#include <string.h>

int main(){
    int n,i,j; 
    printf("Enter the length of the staircase:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for (j = i; j < (n-1) ; j++)
        {
            printf(" ");
        }
        for(int sym = 0; sym < (i+1); sym++)
        {
            printf("#");
        }
        printf("\n");
    }
    
   /* char str[20]="";
    for(i=0;i<n;i++)
        strcat(str,"#");
    for(i=0;i<n;i++)
        printf("%*.*s\n",n,i+1,str);*/
    return 0;
}