#include <stdio.h>

void main(){
    struct student
    {
        int rll;
        char name[30];
        int marks;
    }a;

    FILE *fp;
    fp=fopen("student.dat","ab");
    if(fp==NULL)
        printf("Error 404");
    else{
        printf("Enter roll no.");
        scanf("%d",&a.rll);
        printf("Enter name");
        scanf("%s",a.name);
        printf("Enter marks");
        scanf("%d",&a.marks);
        fwrite(&a,sizeof(a),1,fp); 
        fclose(fp);
    }
    printf("\nData Saved.....\n");
    fp=fopen("student.dat","rb");
    printf("\nRoll NO.     Name      Marks\n");
    while(fread(&a,sizeof(a),1,fp)){
        printf("\n%d            %s          %d\n",a.rll,a.name,a.marks);
    }
    fclose(fp);    
}
