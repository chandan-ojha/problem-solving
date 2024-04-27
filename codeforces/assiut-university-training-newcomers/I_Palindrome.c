#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int original = n, reversed = 0;

    while (n != 0)
    {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    printf("%d\n", reversed);

    if (original == reversed)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
