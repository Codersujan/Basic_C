#include<stdio.h>

int main()
{
    char ch;
    printf("Enter character \n");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Upper \n");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Lower \n");
    }
    else
    {
        printf("Not english letter \n");
    }
    return 0;
}