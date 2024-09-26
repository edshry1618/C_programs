
#include <stdio.h>
int sum(int a,int b){
    int num1, num2, s;
    num1=a;
    num2=b;
    s=num1+num2;
    return s;
}
int main() {
    int a,z,b;
    printf("Enter the number 1: ");
    scanf("%d",&a);
    printf("\nEnter the number 2: ");
    scanf("%d",&b);
    z=sum(a,b);
    printf("\nSum=%d",z);
    return 0;
}