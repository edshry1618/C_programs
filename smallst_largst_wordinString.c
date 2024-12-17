#include <stdio.h>
#include <string.h>
#include <ctype.h>

void smallestlargest(char str[]){
    char smallest[100], largest[100];
    int i=0, j=0, len=strlen(str);
    char word[100];
    
    smallest[0]='\0';
    largest[0]='\0';
    
    while(i<=len){
        
        if(str[i]==' '||str[i]=='\0'||ispunct(str[i])){
            if(j!=0){
                word[j]='\0';
                
                if(smallest[0]=='\0' && largest[0]=='\0'){
                    strcpy(smallest,word);
                    strcpy(largest,word);
                }
                else{
                    if(strlen(word)<strlen(smallest)){
                        strcpy(smallest,word);
                    }
                    if(strlen(word)>strlen(largest)){
                        strcpy(largest,word);
                    }
                }
                j=0;
            }
            
        }
        else{
            word[j++]=str[i];
        }
        i++;
    }
    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);
    
};

int main(){
    
    char string[200];
    printf("\nEnter the string:\n");
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")]='\0';
    
    smallestlargest(string);
    return 0;
}
