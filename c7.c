/*
Take a number n from the user and output its cube(n*n*n)
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value:");
    scanf("%d", &n);
    int cube = n * n * n;
    printf("The cube is :%d", cube);
    return 0;
}