#include <stdio.h>

int main() {
    int num,i=2,is_prime=1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        is_prime = 0; 
    } else {
        while (i<=num/2) {
            if (num%i==0) {
                is_prime=0; 
                break;
            }
            i++;
        }
    }

    if (is_prime == 1) {
        printf("\n%d is a prime number.", num);
    } 
    else {
        printf("\n%d is not a prime number.", num);
    }

    return 0;
}