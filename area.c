#include<stdio.h>
//find the area of a circle
int main()
{
    float radious, area;
    printf("Enter the radious\n");
    scanf("%f", &radious);
    area = 3.14 * radious * radious;
    printf("area is : %f", area);
    return 0;
}