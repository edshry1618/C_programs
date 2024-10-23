// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int lim,i,k;
    int d;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    for(i=2;i<=lim;i++){
        d=0;
        for(k=2;k<=i/2;k++){
            if(i%k==0)
            d+=1;
        }
        if(d==0)
            printf("%d\n",i);
    }

    return 0;
}
