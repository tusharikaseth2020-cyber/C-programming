#include <stdio.h>

int main()
{
    int arr1[5], arr2[5], sum[5], i;

    printf("Enter 5 elements of first array:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr1[i]);

    printf("Enter 5 elements of second array:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr2[i]);

    for (i = 0; i < 5; i++)
        sum[i] = arr1[i] + arr2[i];

    printf("Sum of two arrays: ");
    for (i = 0; i < 5; i++)
        printf("%d ", sum[i]);

    return 0;
}
