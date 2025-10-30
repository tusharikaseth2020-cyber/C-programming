/*
write a program to read the contents of a file and display it on the screen in a proper format.
*/
#include <stdio.h>
int main()
{
    FILE *file;
    char ch;

    file = fopen("example.txt", "r");
    if (file == NULL)

    {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }
    fclose(file);
    return 0;
}