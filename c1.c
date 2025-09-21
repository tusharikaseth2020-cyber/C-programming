#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num); // & - address of the variable
    printf("you Entered the number:%d\n", num);
    return 0;
}