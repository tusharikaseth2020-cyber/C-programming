/*
Wap to display the count of program line by line in a file.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char line[1000];  // To store each line

    
    printf("Enter the file name: ");
    scanf("%s", filename);

    
    file = fopen(filename, "r");

    
    if (file == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }

    printf("\n--- Contents of %s ---\n\n", filename);

    
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    
    fclose(file);

    printf("\n--- End of File ---\n");
    return 0;
}
