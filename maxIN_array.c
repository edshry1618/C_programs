// Online C compiler to run C program online
#include <stdio.h>


int main() {
    // Write C code here
    int arr[20], *ptr, max=0;
    int i, n;
    
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    ptr=arr;
    max=*ptr;
    
    for(i=1;i<n;i++){
        if(*(ptr + i) >max){
            max=*(ptr + i);
        }
    }
    printf("\nThe max element is %d",max);

    return 0;
}
