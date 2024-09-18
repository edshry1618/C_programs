#include <stdio.h>

int main() {

	int num,fac=1;
	printf("Enter the number: ");
	scanf("%d",&num);
	while(num!=0){
	    fac*=num;
	    num--;
	}
	printf("\nThe factorial=%d",fac);
	
	
	return 0;
}

