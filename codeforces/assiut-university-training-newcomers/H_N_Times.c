#include <stdio.h>

void n_times()
{
    int n;
    scanf("%d", &n);
    getchar();
    char ch;
    scanf("%c", &ch);
    getchar();

    for (int i = 1; i <= n; i++)
    {
        printf("%c ", ch);
    }

    return;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        n_times();
        printf("\n");
    }

    return 0;
}