#include <stdio.h>

int main()
{
    double n;
    int i, money_note[7]= {100,50,20,10,5,2,1}, coin_note[5]= {50,25,10,5,1}, a, note[8],coin[8], y;
    scanf("%lf",&n);
    a=(int)n;
    for(i=0; i<7; i++){
        note[i]=a/money_note[i];
        a=a%money_note[i];
    }
    n=n*100;
    a=n;
    y=a%100;
    for(i=0; i<5; i++){
        coin[i]=y/coin_note[i];
        y=y%coin_note[i];
    }
    printf("NOTAS:\n");
    for (i=0; i<6; i++){
        printf("%d nota(s) de R$ %.2f\n",note[i],(float)money_note[i]);
    }
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ %.2f\n",note[6],(float)money_note[6]);
    for (i=0; i<5; i++){
        printf("%d moeda(s) de R$ %.2f\n",coin[i],(float)coin_note[i]/100);
    }
    return 0;
}
