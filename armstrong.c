#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int number,temp,reminder,n=0,sum=0;
    printf("Enter number \n");
    scanf("%d", &number);
    temp = number;
    while(temp > 0)
    {
        temp = temp / 10;
        n++;
    }
    temp = number;
    while(temp > 0)
    {
        reminder = temp % 10;
        sum = sum + pow(reminder,n);
        temp = temp / 10;
    }
    number = temp;
    {
    if(sum == number)
    {
        printf("The number is armstrong \n");
    }
    else
    {
        printf("The number is not armstrong \n");
    }
    return 0;
}