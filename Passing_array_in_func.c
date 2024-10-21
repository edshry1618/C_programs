// Online C compiler to run C program online
#include <stdio.h>

void input(int p[],int n){
    for(int i=0;i<n;i++){
        printf("Enter the elements: ");
        scanf("%d",&p[i]);
    }
}
int main() {
    // Write C code here
    int lim,i;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    int arr[lim];
    input(arr,lim);
    printf("The Array ⟩⟩⟩\n");
    for(i=0;i<lim;i++)
        printf("%d\n",arr[i]);

    return 0;
}
