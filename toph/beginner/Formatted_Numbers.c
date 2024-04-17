/*#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    int i;
    gets(s);
    int k = 0, j = 0;
    int new[30];
    for (i = strlen(s) - 1; i >= 0; i--)
    {
        if (j == 3)
        {
            new[k++] = ',';
            new[k++] = s[i];
            j = 0;
        }
        else
            new[k++] = s[i];
        j++;
    }

    for (i = k - 1; i >= 0; i--)
    {
        printf("%c", new[i]);
    }
}*/

#include <stdio.h>
int main()
{
    int a, r, count = 0, ans;

    scanf("%d", &a);

    while (a != 0)
    {
        r = a % 10;
        count = count + 1;
        if (count == 3)
        {
            count = 0;
        }
        a = a / 10;
    }

    return 0;
}