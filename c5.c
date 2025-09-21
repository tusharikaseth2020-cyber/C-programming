/*
WAP to calculate the area of circle
*/
#include <stdio.h>
int main()
{
    float side;
    printf("Enter value of side:");
    scanf("%f", &side);
    float area = 3.14 * side * side;
    printf("The area of circle is :%f", area);
    return 0;
}