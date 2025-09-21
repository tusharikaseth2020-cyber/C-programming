/*Wap to calculate celsius to fehrenheit*/
#include <stdio.h>
int main()
{
    float celsius, fehrenheit;
    printf("Enter the value of fehrenheit:");
    scanf("%f", &fehrenheit);
    celsius = (fehrenheit - 32) * 5 / 9;
    printf("Temperature in celsius is: %.2f\n", &celsius);
    return 0;
}