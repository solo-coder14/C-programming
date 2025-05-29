#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
 char str[MAX_SIZE], reverse[MAX_SIZE];
 int flag;
 /* Input string from user */
 printf("Enter any string: ");
 gets(str);
 strcpy(reverse, str); //Copies original string to reverse
 strrev(reverse); //Finds the reverse of string
 flag = strcmp(str, reverse); //Checks whether both are equal or not
 /* If both strings are equal */
 if(flag == 0)
 {
 printf("String is Palindrome.");
 }
 else
 {
 printf("String is Not Palindrome.");
 }
 return 0;
}
