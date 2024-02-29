#include<stdio.h>

int main()
{
    //to find the sum of all num between 5 to 50

    int i,sum=0;
    for(i=5; i<=50; i++)
    {
        sum = sum + i;
    }
    printf("Sum is %d \n", sum);
    return 0;
}