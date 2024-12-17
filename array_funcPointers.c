#include <stdio.h>

int add(int a, int b){
    return a+b;
};

int sub(int a, int b){
    return a-b;
};

int mul(int a, int b){
    return a*b;
};

int divd(int a, int b){
    if(b==0)
        printf("Zero Divison!");
    else
        return a/b;
};

int main(){
    
    printf("\t\t\tMake choice:\t\t\t\n");
    
    int (*Choice[])(int, int)={add, sub, mul, divd};
    int choice, a, b;
    
    printf("0: Add\n");
    printf("1: Subtract\n");
    printf("2: Multiply\n");
    printf("3: Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    printf("Enter num1 and num2 [with space in b/w]");
    scanf("%d %d",&a,&b);
    
    if (choice >= 0 && choice <= 3) {
        int result = Choice[choice](a, b);
        printf("Result: %d\n", result);
    } else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}
