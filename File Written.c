#include <stdio.h>
#include <string.h>


void main()  {
    char name[100];
    gets(name);
    //int len=strlen(name);
    FILE *file;
    file= fopen("text.txt","w");
    if (file==NULL)
        printf("NO");
    else {
        printf("Exist\n");
        /*for (int i=0; i<len; i++){
        fputc(name[i], file);
        }*/
        //fputs(name, file);
        fprintf(file,"%s",name);
        printf("written");
    fclose(file);
    }
 }

