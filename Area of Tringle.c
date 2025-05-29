#include<stdio.h>
#include <math.h>
int main()
{
    printf("The Area of Triangle\n");
    float a,b,c,s,area, peri;
    printf("Now enter the value of Height and Base: ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    peri=a+b+c;
    printf("Total= %f and peri=%f",area,peri);
    return 0;

}
