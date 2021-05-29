#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2,option;
    printf("Enter two numbers:");
    scanf("%d %d", &n1,&n2);
    printf("choose an option to perform:");
    printf("(1.Addition 2.Subtraction 3.Multiplication 4.Division) =");
    scanf("%d", &option);
    switch(option)
    {
        case 1:
            printf("%d", n1+n2);
            break;
        case 2:
            printf("%d", abs(n2-n1));
            break;
        case 3:
            printf("%d", n1*n2);
            break;
        case 4:
            printf("%d", n1/n2);
            break;
        default:
            printf("Enter a valid integer");
    }
}