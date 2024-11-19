#include <stdio.h>

int main() {
	// your code goes here
	int n=5;
	int temp;
	int arr[5]={3,2,5,1,4};
	for(int i=0;i<n;i++){
	    for(int j=i+1;j<n;j++){
	        if(arr[i]>arr[j]){
	            temp=arr[i];
	            arr[i]=arr[j];
	            arr[j]=temp;
	        }
	    }
	}
	for(int i=0;i<n;i++){
	    printf("%d ",arr[i]);
	}
}

