#include<stdio.h>

int main()
{
    int num;
    printf("Enter the num : ");
    scanf("%d", &num);
    if(num >= 1)
    {
        printf("The number is natural number \n");
    }
    else
    {
        printf("The number is not a natural number \n");
    }
    return 0;
}