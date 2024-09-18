#include <stdio.h>

int main() {
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 100 == 0) {
        if (year % 400 == 0) {
            printf("\nLeap year %d", year);
        } else {
            printf("\nNot a leap year %d", year);
        }
    } else {
        if (year % 4 == 0) {
            printf("\nLeap year %d", year);
        } else {
            printf("\nNot a leap year %d", year);
        }
    }

    return 0;
}