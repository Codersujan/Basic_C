#include<stdio.h>

int main()
{
    char alphabet;
    printf("Enter alphabet \n");
    scanf("%c", &alphabet);
    switch(alphabet)
    {
        case 'A' : printf("viowel \n");
                  break;
        case 'E' : printf("viowel \n");
                  break;
        case 'I' : printf("viowel \n");
                  break;
        case 'O' : printf("viowel \n");
                  break;
        case 'U' : printf("viowel \n");
                  break;
        case 'a' : printf("viowel \n");
                  break;
        case 'e' : printf("viowel \n");
                  break;
        case 'i' : printf("viowel \n");
                  break;
        case 'o' : printf("viowel \n");
                  break;
        case 'u' : printf("viowel \n");
                  break;
        default : printf("consonant \n");                                                                                                    
    }
    return 0;
}