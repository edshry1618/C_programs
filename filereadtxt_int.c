#include<stdio.h>

void main() {
    FILE *fp;
    int num;
    
    fp = fopen("hello.txt", "r");
    if (fp != NULL) {
        while (fscanf(fp, "%d", &num) != EOF) { // Read integers from the file
            printf("Integer: %d\n", num);
        }
        fclose(fp);
    } else {
        printf("Error: Unable to open file.\n");
    }
}
