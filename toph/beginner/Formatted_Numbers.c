#include <stdio.h>
int main()
{
    int a;
    int count = 0;

    scanf("%d", &a);

    while (a != 0)
    {
        a = a / 10;
        count++;
    }

    return 0;
}