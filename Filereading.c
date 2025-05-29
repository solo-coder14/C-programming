#include <stdio.h>
void main(){
    FILE *file;
    file= fopen("text.txt","r");
    char name[100];
    if (file==NULL)
        printf("NO");
    else {
        while(!feof(file)){
        fgets(name, 100, file);
        printf("%s",name);
        }
       /* fscanf(file,"%s\n%s",&name);
        printf("%s\n%s",name);
        fclose(file);*/
    }
}
