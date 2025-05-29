#include<stdio.h>
main()
{
    int a,b,x;
    printf("Enter the value a and b");
    scanf("%d%d",&a,&b);
    x=((a+b)+abs(a-b))/2;
    printf("the largest numb=%d",x);
    getch();
}
