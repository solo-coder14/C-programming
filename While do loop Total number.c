#include<stdio.h>
main()
{ printf("1+2+3+4......+n=?\n");
 int i,n,sum=0;
 printf("Enter the value of N");
 scanf("%d",&n);
 i=1;
 while (i<=n)
 {
     sum=sum+i;
      i=i+1;
 }
 printf("The sum=%d",sum);
    getch();
}
