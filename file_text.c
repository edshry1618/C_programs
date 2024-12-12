#include <stdio.h>

void main(){
    FILE *fp;
    fp=fopen("prac.txt","w");
    char name[30];
    int marks;
    if(fp==NULL)
        printf("File Not Opened.");
    else{
        printf("Enter your name:");
        scanf("%s",name);
        printf("Enter your marks:");
        scanf("%d",&marks);
        fprintf(fp,"%s",name);
        fprintf(fp," %d",marks);
        printf("Data Saved....\n");
        fclose(fp);
    }
    fp=fopen("prac.txt","r");
    char ch;
    while((ch=getc(fp))!=EOF){
        putchar(ch);
    }
    fclose(fp);
}
