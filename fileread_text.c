#include<stdio.h>
void main(){
    FILE *fp;
    char ch;
    fp=fopen("hello.txt","r");
    if(fp!=NULL){
        while((ch=getc(fp))!=EOF){
            putchar(ch);
        }
        fclose(fp);
    }
    else
    printf("ERROR 404");
}
