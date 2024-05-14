#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        if (x <= y)
        {
            printf("%d ", x);
        }
        else
        {
            printf("%d ", y);
        }

        if (x >= y)
        {
            printf("%d ", x);
        }
        else
        {
            printf("%d ", y);
        }

        printf("\n");
    }

    return 0;
}