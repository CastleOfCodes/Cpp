#include<stdio.h>
int grading(int m);
void main()
{
    int mark[20],i,n,roundoff[20];
    printf("Enter the number of students:");
    scanf("%d",&n);
    printf("Enter the marks of the students:\n");
    for(i=0;i<n;i++)
    {
        printf("student%d:",i+1);
        scanf("%d",&mark[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d. %d \n",i+1,mark[i]);
    }
    for ( i = 0; i < n; i++)
    {
        roundoff[i]=grading(mark[i]);
    }
    printf("Roundoff marks are:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d. %d\n",i+1,roundoff[i]);
    }
    
}
int grading(int m)
{
    if(m<38 || m%5<3)
    {
        return m;
    }
    else
    {
        m=m+(5-(m%5));
        return m;
    }
    
}
    