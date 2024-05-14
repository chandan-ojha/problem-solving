#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    long long int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long int sum = 0;

    for (int i = n - m; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("%lld\n", sum);

    return 0;
}

// solved by recursion

/*int suffix_sum(long long int a[], int n, int i)
{
    if (i == n)
    {
        return 0;
    }

    long long int result = a[i] + suffix_sum(a, n, i + 1);
    return result;
}

#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    long long int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long int result = suffix_sum(a, n, n - m);

    printf("%lld\n", result);

    return 0;
}*/