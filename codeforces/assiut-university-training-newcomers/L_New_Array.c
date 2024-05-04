#include <stdio.h>

void new_array(int a[], int b[], int n)
{
    int c[n + n];

    for (int i = 0; i < n; i++)
    {
        c[i] = b[i];
    }

    int i = n;

    for (int j = 0; j < n; j++)
    {
        c[i] = a[j];
        i++;
    }

    for (int i = 0; i < n + n; i++)
    {
        printf("%d ", c[i]);
    }

    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int b[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    new_array(a, b, n);

    return 0;
}