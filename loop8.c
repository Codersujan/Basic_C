#include<stdio.h>

int main()
{
    //to find the reverse table of any number
    int n,mul;
    printf("Enter the number : ");
    scanf("%d", &n);

    for(int i = 10; i >= 1; i--)
    {
        mul=n*i;
        printf("multiplication is %d \n", mul);
    }
    return 0;
}