#include <stdio.h>
int main()
{
    char x[21], y[21];

    scanf("%s", x);
    scanf("%s", y);

    int i = 0;

    while (1)
    {
        if (x[i] == '\0' && y[i] == '\0')
        {
            printf("%s", x);
            break;
        }
        else if (x[i] == '\0')
        {
            printf("%s", x);
            break;
        }
        else if (y[i] == '\0')
        {
            printf("%s", y);
            break;
        }

        if (x[i] == y[i])
        {
            i++;
        }
        else if (x[i] <= y[i])
        {
            printf("%s", x);
            break;
        }
        else
        {
            printf("%s", y);
            break;
        }
    }

    return 0;
}