#include<stdio.h>
#include<math.h>
main()
{ float A,r,h,l;
printf("enter the value of r and h ");
scanf("%f%f",&r,&h);
l=sqrt(h*h+r*r);
A=3.1416*l*r*r;
printf("the area= %f",A);

    getch();

}
