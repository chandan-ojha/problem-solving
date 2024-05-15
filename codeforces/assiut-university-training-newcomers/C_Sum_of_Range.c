#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a <= b)
    {
        long long int sum_all = 0;
        long long int sum_even = 0;
        long long int sum_odd = 0;

        for (int i = a; i <= b; i++)
        {
            sum_all = sum_all + i;

            if (i % 2 == 0)
            {
                sum_even = sum_even + i;
            }
            else
            {
                sum_odd = sum_odd + i;
            }
        }

        printf("%lld\n", sum_all);
        printf("%lld\n", sum_even);
        printf("%lld\n", sum_odd);
    }

    else
    {
        long long int sum_all = 0;
        long long int sum_even = 0;
        long long int sum_odd = 0;

        for (int i = a; i >= b; i--)
        {
            sum_all = sum_all + i;

            if (i % 2 == 0)
            {
                sum_even = sum_even + i;
            }
            else
            {
                sum_odd = sum_odd + i;
            }
        }

        printf("%lld\n", sum_all);
        printf("%lld\n", sum_even);
        printf("%lld\n", sum_odd);
    }

    return 0;
}