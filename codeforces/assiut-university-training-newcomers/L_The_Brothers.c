#include <stdio.h>
#include <string.h>
int main()
{
    char f1[500], s1[500];
    scanf("%s %s", f1, s1);
    char f2[500], s2[500];
    scanf("%s %s", f2, s2);

    if (strcmp(s1, s2) == 0)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }
    return 0;
}