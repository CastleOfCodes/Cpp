#include<stdio.h>
int binaryser(int ar[], int n, int ele);
void main()
{
    int n, i, ele, ar[20];
    printf("Enter the size of the elemnts to the array:");
    scanf("%d",&n);
    printf("Enter the elements....\n");
    for(i = 0; i < n; i++)
    {
        printf("%d.",i+1);
        scanf("%d",&ar[i]);
    }
    printf("Entered list is:...:\n");
     for(i = 0; i < n; i++)
    {
        printf("%d. %d\n",i+1,ar[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(ar[j] > ar[j+1])
            {
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
        
    }
    printf("Sorted list is....");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",ar[i]);
    }
    
    printf("\nEnter the element to search:");
    scanf("%d",&ele);

    int pos = binaryser(ar, n, ele);

    if(pos == -1)
    {
        printf("Element %d is not found in the list",ele);
    }
    else
    {
        printf("Element %d is found at position %d in the list",ele,pos);
    }
  
}
int binaryser(int ar[], int n, int ele)
{
    int first = 0, last = n-1;
    while(first <= last)
    {
        int mid = (first + last)/2;
        if (ele == ar[mid])
        {
            return mid+1;
        }
        else if (ele > ar[mid])
        {   
            first = mid+1;
        }
        else
        {
            last = mid - 1;
        }
    }
    return -1;
}




