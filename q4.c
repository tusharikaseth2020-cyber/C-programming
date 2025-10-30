/*
wap to count the number of spaces in a file.
*/
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int space_count = 0;

    fp = fopen("example.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == ' ')
        {
            space_count++;
        }
    }

    fclose(fp);
    printf("Number of spaces in the file: %d\n", space_count);
    return 0;
}