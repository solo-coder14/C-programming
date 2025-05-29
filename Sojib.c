#include<stdio.h>
//function prototypes
void woafi();

void main()
{
    char month[12][10]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int i;
    char r;
    again:
    {
        printf("Enter the month value: ");
    scanf("%d", &i);


    if(i<1 || i>12){
        printf("\nIncorrect Value!!\n");
        return;

        }
    else
        if(i!=12){
    printf("\n%s is followed by %s\n\n", month[i-1], month[i]);

        goto again;
    }
    else{
        printf("\n%s is followed by %s\n\n", month[i-1], month[0]);
        goto again;
    }
    }
}
/* void woafi()
 { char r;
 printf("And exit the program Enter R\n");
 fflush(stdin);
    r=getchar();
    if (r=='r' || r=='R')
    {
      return;
    }
    else
    {
        return;
    }
 }*/
