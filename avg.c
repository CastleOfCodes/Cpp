#include<stdio.h>
#include<conio.h>
void main()
{
    int n,marks[20],sum=0;
    printf("enter the number of students:");
    scanf("%d", &n);
    printf("enter the marks of the students:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    
    int average=sum/n;
    printf("The average of marks of the students is %f", average);

}