#include<stdio.h>
main()
{ printf("1+2+3+4......+100=?\n");
   int i,sum=0;
   for (i=1; i<=100; i=i+1)
    sum=sum+i;
   printf("the sum=%d",sum);
    getch();
}
