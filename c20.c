/* Sum and Product of Anti-Diagonal Elements of a 3x3 Matrix */
#include <stdio.h>

int main()
{
    int matrix[3][3], i, j;
    int sum = 0, product = 1;

    printf("Enter 9 elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < 3; i++)
    {
        sum += matrix[i][2 - i];
        product *= matrix[i][2 - i];
    }

    printf("Sum of anti-diagonal: %d\n", sum);
    printf("Product of anti-diagonal: %d\n", product);

    return 0;
}
