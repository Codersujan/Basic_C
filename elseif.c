#include<stdio.h>

int main()
{
    int age;
    printf("Enter age \n");
    scanf("%d", &age);
    if(age >= 18)
    {
        printf("Adult \n");
        printf("They can vote \n");
        printf("They can drive");
    }
    else if(age > 12 && age < 18)
    {
        printf("Teenager \n");
        printf("Very denger to mobile phone \n");
        printf("Attract outside game \n");
    }
    else
    {
        printf("Not Adult \n");
        printf("Child \n");
    }
    return 0;
}