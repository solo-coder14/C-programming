#include<stdio.h>

int first_input();
int second_input();
int sum();

int first_input()
{
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);
    return x;
}
int second_input()
{
    int y;
    printf("Enter the value of y:");
    scanf("%d",&y);
    return y;
}
int sum()
{
 int a=first_input();
 int b=second_input();
 int s=a+b;
 printf("%d",s);
}
main()
{
    sum();
}
