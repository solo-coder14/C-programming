#include<stdio.h>
void main()
{ printf("2+4+6......+n=?\n");
   int i,n,sum=0;
   printf("Enter the value of N");
   scanf("%d",&n);
   for (i=2; i<=n; i=i+2)
    sum=sum+i;
   printf("the sum=%d",sum);
}
