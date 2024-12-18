// Problem Link: https://www.codechef.com/START165D/problems/POSTPERI
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        int minDifference = INT_MAX;

        for (int l = 1; l <= n; l++)
        {
            for (int w = 1; w <= m; w++)
            {
                int perimeter = 2 * (l + w);
                int difference = abs(perimeter - k);
                minDifference = min(minDifference, difference);
            }
        }

        cout << minDifference << endl;
    }

    return 0;
}