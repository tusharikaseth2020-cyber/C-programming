/*
wap to count the no. of character or no. of words in a file
*/
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int char_count = 0, word_count = 0;
    fp = fopen("sample.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        char_count++;
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            word_count++;
        }
    }

    if (char_count > 0)
    {
        word_count++;
    }
    fclose(fp);
    printf("Number of characters: %d\n", char_count);
    printf("Number of words: %d\n", word_count);
    return 0;
}