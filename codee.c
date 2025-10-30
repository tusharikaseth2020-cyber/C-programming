/*write a program to open a file check whether the file is empty or contains some text the program should be i read only format*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char filename[100];
    int first_char;

    printf("Enter the filename to open: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Error opening file. Please check if the file exists.\n");

        return 1;
    }

    first_char = fgetc(file);

    if (first_char == EOF)
    {
        printf("The file '%s' is EMPTY.\n", filename);
    }
    else
    {
        printf("The file '%s' CONTAINS TEXT (first character: '%c').\n", filename, (char)first_char);
    }

    fclose(file);

    return 0;
}
