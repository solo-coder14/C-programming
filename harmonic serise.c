#include <stdio.h>
void main()
{
 int i,n;
 float s=0.0;
 printf("Input the number of Series : ");
 scanf("%d",&n);
 printf("\n");
  printf("1 + ");
 for(i=1;i<=n;i++){
    if(i<n){
    printf("1/%d + ",i);
    s = s+1/(float)i;
 }
 else
    if(i==n){
    printf("1/%d ",i);
    s = s+1/(float)i;
 }
 }
    printf("\n\n");
    printf("Sum of Harmonic Series up to %d Series : %f \n",n,s);
}
