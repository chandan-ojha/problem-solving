#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {

            int a;
            cin >> a;
            cout << 0 << endl;
            continue;
        }

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll total_seconds = 0;
        ll cumulative_sum = 0;

        for (int i = 0; i < n; i++)
        {
            cumulative_sum += a[i];
            total_seconds += abs(cumulative_sum);
        }

        cout << total_seconds << endl;
    }

    return 0;
}