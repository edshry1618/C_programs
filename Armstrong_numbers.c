#include<stdio.h>

int main() {

    int a, arm;
    int num, dig;
    for (a = 1; a <= 500; a++) {
        num = a;
        int temp = num;
        arm = 0;
        while (temp != 0) {
            dig = temp % 10;
            arm += dig * dig * dig;
            temp /= 10;
        }
        if (arm == num) {
            printf("%d", a);
            printf("\n");
            }
        }

    return 0;
}
