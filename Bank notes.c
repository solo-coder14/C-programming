#include <stdio.h>

void main()
{
    int n,i,j,br[7];
    int ch[7]={100,50,20,10,5,2,1};
    scanf("%d",&n);
    printf("%d\n",n);
    for (i=0; i<7; i++){
        br[i]=n/ch[i];
        n=n%ch[i];
    }
    for (j=0; j<7; j++){
    printf("%d nota(s) de R$ %d,00\n",br[j],ch[j]);
    }
}
