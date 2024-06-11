#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int maxSum = 0;
        int optimalX = 2;

        for (int x = 2; x <= n; x++)
        {
            int k = n / x;
            int sum = x * (k * (k + 1)) / 2;

            if (sum > maxSum)
            {
                maxSum = sum;
                optimalX = x;
            }
        }

        cout << optimalX << endl;
    }

    return 0;
}