#include <stdio.h>

int main() {
    // Write C code here
    int i,j,k;
    int n=5;
    for(i=1;i<=n;i++){
        for(j=i;j<=n-1;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("* ");
        printf("\n");
    }

    return 0;
}
