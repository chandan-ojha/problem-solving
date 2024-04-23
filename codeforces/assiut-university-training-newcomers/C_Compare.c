// TODO
#include <stdio.h>
#include <string.h>
int main()
{
    char x[21], y[21];

    scanf("%s", x);
    scanf("%s", y);

    int xl = strlen(x);
    int yl = strlen(y);

    if (xl <= yl)
    {
        printf("%s\n", x);
    }
    else
    {
        printf("%s\n", y);
    }

    return 0;
}