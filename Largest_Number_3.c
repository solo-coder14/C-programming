#include <stdio.h>

int main()
{
    int a, b, c, m, s;
    scanf("%d%d%d", &a, &b, &c);

    if ((a < b) & (a < c))

        s = a;
    else
    {
        if (b < c)
            s = b;
        else
            s = c;
    }
    printf("%d ", s);

    if ((a > b) & (a > c))

        m = a;
    else
    {
        if (b > c)
            m = b;
        else
            m = c;
    }
    printf("%d\n", m);

    

    return 0;
}
