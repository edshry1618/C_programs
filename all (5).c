#include <stdio.h>
#include <math.h>

int main() {
    
    float base,apt;
    float hypo;
    printf("Enter base:");
    scanf("%f",&base);
    printf("\nEnter aptitude:");
    scanf("%f",&apt);
    hypo=sqrt(base*base+apt*apt);
    printf("\nHypotenuse=%.2f",hypo);
    return 0;

}

