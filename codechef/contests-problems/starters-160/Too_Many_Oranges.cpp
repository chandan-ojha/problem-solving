// Problem link: https://www.codechef.com/START160D/problems/ORANGES (Confusion)
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
        int n, k;
        cin >> n >> k;

        int minSlices = 10 * n;
        int maxSlices = 12 * n;

        if (k < minSlices || k > maxSlices)
        {
            cout << "NO\n";
            continue;
        }

        vector<bool> dp(k + 1, false);
        dp[0] = true;

        for (int i = 0; i < n; ++i)
        {
            vector<bool> new_dp = dp;

            for (int j = 0; j <= k; ++j)
            {
                if (dp[j])
                {
                    if (j + 10 <= k)
                    {
                        new_dp[j + 10] = true;
                    }
                    if (j + 11 <= k)
                    {
                        new_dp[j + 11] = true;
                    }
                    if (j + 12 <= k)
                    {
                        new_dp[j + 12] = true;
                    }
                }
            }
            dp = new_dp;
        }
        if (dp[k])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}