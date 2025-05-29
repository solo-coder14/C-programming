#include<stdio.h>
void main()
{
    int m;
    printf("Enter the mark");
    scanf("%d",&m);
    if ((33<=m)&(m<40)){
        printf("grade=D");
    }
else
        if((m>=40)&(m<50))
        printf(" grade=-c");
else
         if((m>=50)&(m<60))
            printf("grade=c");
    else
         if((m>=60)&(m<70))
            printf("grade=A-");
            else
         if((m>=70)&(m<80))
            printf("grade=A");
            else
         if((m>=80)&(m<100))
            printf("grade=A+");
else {
    printf("you are fail");
}
}
