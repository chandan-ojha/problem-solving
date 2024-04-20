#include <stdio.h>
int main()
{
    int a, b, c;
    char s, q;
    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    if (s == '+')
    {
        int result = a + b;

        if (result == c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d", result);
        }
    }

    if (s == '-')
    {
        int result = a - b;

        if (result == c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d", result);
        }
    }

    if (s == '*')
    {
        int result = a * b;

        if (result == c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d", result);
        }
    }

    return 0;
}