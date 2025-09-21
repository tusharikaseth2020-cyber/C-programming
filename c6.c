/* Wap to calculate the perimeter of the rectangle
take the values from user
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    int peri = 2 * (a + b);
    printf("The perimeter of the rectangle is:%d", peri);
    return 0;
}