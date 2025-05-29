#include <stdio.h>
void main(){
    int i, n;
    int first=0, second=1;
    printf("Enter Series of Fibonacci : ");
    scanf("%d",&n);
    int next=first+ second ;
    printf("Fibonacci series: %d %d",first,second);
    for (i=3; i<=n; i++){
        printf (" %d",next);
        first=second;
        second=next;
        next= first+second;
    }
}
