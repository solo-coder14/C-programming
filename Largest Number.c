#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,x;
printf("Enter the value of any three numbers");
scanf("%d%d%d",&a,&b,&c);
if ((a>b)&&(a>c))

    x=a;
else
  {if(b>c)
        x=b;
    else
        x=c;
  }

    printf("The largest Number=%d",x);
    getch();
}
