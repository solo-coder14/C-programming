#include <stdio.h>
void main(){
    printf("1)Input Name\n2)Display Name\n");
    printf("Enter your choice: ");
    //choice list
    int x;
    scanf("%d",&x);
    switch(x){
    case 1: file_create(); break;
    case 2: display_name(); break;
    default: printf("Invaid Input"); break;
    }
}
//file create
void file_create(){
    system("cls");
    FILE *fp;
    fp= fopen("Name.txt","w");
    printf("Enter Full Name: ");
    fflush(stdin);
    char nam[100];
    gets(nam);
    fputs(nam,fp);
    fclose(fp);
}

//display name
void display_name(){
    system("cls");
    FILE *fp;
    fp= fopen("Name.txt","r");
    printf("Display Full Name: ");
    fflush(stdin);
    char fnam[100],lnam[100];
    fscanf(fp,"%s %s",&fnam,&lnam);
    printf("%s %s",fnam,lnam);
    fclose(fp);
}
