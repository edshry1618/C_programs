#include <stdio.h>

void main() {
    FILE *fp;
    int numb[3] = {123, 456, 789};

    // Open the file in write mode
    fp = fopen("hello.txt", "w");
    if (fp != NULL) {
        printf("File created and opened successfully.\n");
        
        // Write integers to the file
        for (int i = 0; i <= 2; i++) {
            printf("Writing to file: %d\n", numb[i]); // Debug output
            if (fprintf(fp, "%d\n", numb[i]) < 0) {
                printf("Failed to write: %d\n", numb[i]);
            }
        }

        fclose(fp); // Close the file
        printf("Data saved successfully!\n");
    } else {
        printf("ERROR 404: File could not be opened.\n");
    }
}
