#include<stdio.h>
main()
{ printf("(2+4+6......+n)^2=?\n");
   int i,n,sum=0;
   printf("Enter the value of N");
   scanf("%d",&n);
   for (i=2; i<=n; i=i+2)
    sum=sum+pow(i,2);
   printf("the sum=%d",sum);
    getch();
}
