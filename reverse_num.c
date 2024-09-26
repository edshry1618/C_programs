
#include <stdio.h>

int main() {
    int rev=0,rem=0,num;
    printf("Enter the number:");
    scanf("%d",&num);
    int temp=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("Original=%d",temp);
    printf("\nReversed=%d",rev);
    return 0;
}
