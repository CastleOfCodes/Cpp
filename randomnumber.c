#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    srand(time(NULL));
    for(int  i = 0; i < 6; i++){
    printf("%d\n",rand());
    }
}