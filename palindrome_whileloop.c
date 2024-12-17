#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindrome(char word[]) {
    int start = 0, end = strlen(word) - 1;

    while (start < end) {
        if (tolower(word[start]) != tolower(word[end])) {
            return 1; // Not a palindrome
        }
        start++;
        end--;
    }
    return 0; // Palindrome
}

int main() {
    char string[100];
    int flag;

    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0'; // Remove the newline character

    flag = palindrome(string);

    if (flag == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
