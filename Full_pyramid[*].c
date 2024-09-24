#include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	    for(int j=i;j<=n-1;j++)
	        printf(" ");
	    for(int k=1;k<=2*(i-1)-1;k++)
	        printf("*");
	    printf("\n");
	}

}
