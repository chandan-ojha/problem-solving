#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int y = n / 365;
    int m = (n % 365) / 30;
    int d = (n % 365) % 30;

    printf("%d years\n", y);
    printf("%d months\n", m);
    printf("%d days\n", d);

    return 0;
}