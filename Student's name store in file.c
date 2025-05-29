#include <stdio.h>
void main(){
    char x[100];
    int roll;
    FILE *file;
    file=fopen("student.txt","a");
    printf("Enter the number of student name: ");
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        printf("Enter the student name: ");
        fflush(stdin);
        gets(x);
        printf("Enter the student Roll: ");
        scanf("%d",&roll);
        fprintf(file,"%s\t%d\n",x,roll);
    }
    fclose(file);
}
