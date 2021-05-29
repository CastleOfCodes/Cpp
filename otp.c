#include<stdio.h>
void generateotp(int orderId);
void main()
{
    int orderID;
    printf("Enter a orderID:");
    scanf("%d",&orderID);
    generateotp(orderID);
}
void generateotp(int orderID)
{
    int rem, otp = 1;
    while(orderID > 0)
    {
        rem = orderID % 10;
        orderID = orderID / 10;
        otp = otp * rem;
    }
    printf("%d", otp);
}