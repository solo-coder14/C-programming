#include<stdio.h>
main()
//snajbjasjn
{
    int x;
    printf("Enter the Year");
    scanf("%d",&x);
    if (x%400==0||(x%4==0&&x%100!=0))
        printf("the year is leap year");
    else
        printf("the year is not leap year");






    getch();
}
