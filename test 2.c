#include<stdio.h>
#include<string.h>
int main() {
 char name[100] , pass[50];
 int age;
 printf("Enter the name: ");
 scanf("%s",name);
 printf("Enter the password: ");
 scanf("%s",pass);
 fflush(stdin);
 scanf("%d", &age);
 puts(name);
 puts(pass);
 printf("%d", age);

}


