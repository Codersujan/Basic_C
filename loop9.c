#include<stdio.h>

int main()
{
    //simply we take a int type var here

    int n;
    //now we go with do-while loop
    do
    {
        printf("Enter the number \n");
        scanf("%d", &n);
        //Here we write the logic of multiple of 7 number

        if(n % 7 == 0)
        {
            break;
        }
        printf("%d \n", n);
    }while(1);
    //when we take a number multiple of 7, then the loop was break and print this

    printf("Stop that is a multiple of number Seven ");
    return 0;
}