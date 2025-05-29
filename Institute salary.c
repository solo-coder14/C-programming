#include<stdio.h>
main()
{
    float x,com,s;
    printf("Enter the amount");
    scanf("%f",&x);
 {

    if (x>50000)
        com=x*0.1;
        else
        if ((x>40000)&(x<=50000))
        com=x*0.05;
        else
    if (x<=40000)
    com=0;

}
s=com+x;

        printf("Total salary=%f",s);


    getch();
}
