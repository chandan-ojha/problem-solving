#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];
    scanf("%s", a);
    scanf("%s", b);

    int al = strlen(a);
    int bl = strlen(b);

    printf("%d %d\n", al, bl);

    char c[al + bl];

    for (int i = 0; i <= 11; i++)
    {
        c[i] = a[i];
    }

    int ual = al;

    for (int i = 0; i <= 11; i++)
    {
        c[ual] = b[i];
        ual++;
    }

    printf("%s\n", c);

    char temp = a[0];

    a[0] = b[0];

    b[0] = temp;

    printf("%s %s", a, b);

    return 0;
}