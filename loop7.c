#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter the number : ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--)
    {
        sum = sum + i;
        printf("%d \n", i);
    }
    printf("sum is %d \n", sum);

    return 0;
}