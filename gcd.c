#include<stdio.h>
main()
{
    int l,s,r,gcd;
    printf("Enter the large an small number");
    scanf("%d%d",&l,&s);
    r=l%s;
    while (r!=0)
    {
        s=r;
        l=s;
        r=l%s;
}
 gcd=s;
 printf("the gcd=%d",gcd);
    getch();
}
