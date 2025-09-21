/*WAP take two numbers from user and take the sum, subtraction , multiplication and division
 */
#include <Stdio.h>
int main()
{
    int a, b;
    printf("Enter a \n", a);
    scanf("%d", &a);
    printf("Enter b \n", b);
    scanf("%d", &b);
    int sum = a + b;
    int sub = a - b;
    int multi = a * b;
    int divd = a / b;
    printf("The sum is :%d\n", sum);
    printf("The sub is :%d\n", sub);
    printf("The multiplication is :%d\n", multi);
    printf("The division is :%d\n", divd);
    return 0;
}