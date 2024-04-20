#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int p1 = pow(a, b);
    int p2 = pow(c, d);

    if (p1 > p2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}