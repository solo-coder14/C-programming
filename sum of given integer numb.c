#include<stdio.h>
void main() {
int num, sum=0, r;
printf("Enter the Integer value: ");
scanf("%d",&num);
while (num){
    r=num%10;
    num=num/10;
    sum=sum+r;
}
printf("sum: %d",sum);
}
