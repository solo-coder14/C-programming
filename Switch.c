#include <stdio.h>
void main()
{
    printf("Enter The value of x: ");
    int x;
    scanf("%d",&x);
    switch (x) {
    case 1 ... 3: printf("ok");break;
    case 4 ... 6: printf("invaild");break;
    default: printf("default");
        }
}
