// TODO
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    if (x <= 1)
    {
        printf("NO\n");
    }
    else
    {
        if (x % 1 == 0 && x % x == 0)
        {
            printf("YES\n");
        }
    }

    return 0;
}