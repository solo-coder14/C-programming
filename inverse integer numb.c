#include <stdio.h>
void main() {
int x,y,rev=0;
printf("enter the integer numb: ");
scanf("%d",&x);
printf("the integer  numb: %d\n",x);
while(x!=0){
    y=x%10;
    //printf("%d",y);
    rev=(rev*10)+y;
    x=x/10;
}
printf("Reverse=%d",rev);
}
