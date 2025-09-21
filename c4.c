/*
WAP to calculate the area of a square
if a =12
*/
#include <Stdio.h>
int main()
{
    int a;
    printf("ENTER VALUE OF a:");
    scanf("%d\n", &a);
    int area = a * a;
    printf("The area of the square is:%d", area);
    return 0;
}