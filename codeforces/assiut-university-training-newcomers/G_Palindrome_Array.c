#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int rarr[n];

    for (int i = n - 1; i >= 0; i--)
    {
        rarr[n - i - 1] = arr[i];
    }

    int isPalindrome = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != rarr[i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}