#include <stdio.h>
#include <string.h>

int main() {
	// your code goes here
	char word[50];
	int flag=0;
	printf("Enter the word:");
	scanf("%s",word);
	int len=strlen(word);
	for(int i=0;i<len;i++){
	    if(word[i]!=word[len-i-1]){
	        flag=1;
	        break;
	    }
	}
	if(flag==1)
	    printf("NO");
	else 
	    printf("YES");

}

