// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int first,second,next;
    int i,r;
    first=0;
    second=1;
    printf("Enter the number of terms: ");
    scanf("%d",&r);
    printf("%d %d ",first,second);
    for(i=2;i<r;i++){
        next=first+second;
        first=second;
        second=next;
        printf("%d ",next);
    }
    

    return 0;
}
