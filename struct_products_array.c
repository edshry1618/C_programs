// Online C compiler to run C program online
#include <stdio.h>

struct product{
    char name[20];
    int qty;
    int rate;
};
int main() {
    // Write C code here
    struct product p[10];
    int i,n;
    printf("Enter the products: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("Enter the name of p%d: ",i+1);
    scanf("%s",p[i].name);
    printf("Enter the quantity  of p%d: ",i+1);
    scanf("%d",&p[i].qty);
    printf("Enter the rate of p%d: ",i+1);
    scanf("%d",&p[i].rate);
    }
    printf("Name\tQty\tRate\tAmount\t");
    for(i=0;i<n;i++){
    printf("\n%s\t%d\t%d\t%d",p[i].name,p[i].qty,p[i].rate,p[i].rate*p[i].qty);

    }
    

    return 0;
}
