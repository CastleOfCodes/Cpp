#include<stdio.h>
int linear(int ar[], int n, int ele);
void main()
{
    int n,i,ar[]={2, 4 , 10, 3, 8},ele;
    n = sizeof(ar)/sizeof(ar[0]);
    printf("The list is: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\nEnter the element to search:");
    scanf("%d",&ele);
    int pos = linear(ar, n, ele);
    if(pos == -1)
    {
        printf("Element is not found in the list.\n");
    }
    else
    {
        printf("Element %d is found at position %d in the list",ele, pos);
    }
    
}
int linear(int ar[], int n, int ele)
{
    for (int i = 0; i < n; i++)
    {
        if(ar[i] == ele)
        {
            return i+1;
        }
    }
    return -1;
    
}