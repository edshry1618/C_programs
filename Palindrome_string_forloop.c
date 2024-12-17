#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], rev[100];
    int length, i, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Convert the string to lowercase for case-insensitive comparison
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    length = strlen(str);

    // Reversing the string
    for (i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[length] = '\0'; // Null-terminate the reversed string

    // Checking if the original string is equal to its reverse
    for (i = 0; i < length; i++) {
        if (str[i] != rev[i]) {
            flag = 0; // Not a palindrome
            break;
        }
    }

    if (flag) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
