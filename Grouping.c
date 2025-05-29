#include<stdio.h>
main()
{
    int x;
    printf("Enter the Roll: ");
    scanf("%d",&x);



     if (x==0)
printf("invalid");
else
if ((x>=1)&(x<=30))
    printf("Group=A");
else
    if ((30<x)&(x<=40))
    printf("Group=B");
else
    if (41<=x)

    printf("Group=c");



    getch();
}
