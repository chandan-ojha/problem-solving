#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int m, k;
    cin >> m >> k;
    string s;
    cin >> s;

    int swish_count = 0;
    for (char c : s)
    {
        if (c == 'S')
        {
            swish_count++;
        }
    }

    if (swish_count >= k)
    {
        cout << m << "\n";
        return;
    }

    int n = m + (k - swish_count) - 1;

    cout << n << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}