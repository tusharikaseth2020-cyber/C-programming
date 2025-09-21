/*
 */
#include <stdio.h>

int main()
{
    int matrix[3][3], i, j;
    int sum = 0;

    printf("Enter 9 elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < 3; i++)
        for (j = i; j < 3; j++) // j starts from i
            sum += matrix[i][j];

    printf("Sum of upper triangle: %d\n", sum);

    return 0;
}
