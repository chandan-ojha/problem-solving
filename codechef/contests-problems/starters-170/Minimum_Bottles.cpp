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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        int total_water = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total_water += a[i];
        }

        int min_bottles = (total_water + x - 1) / x;
        cout << min_bottles << '\n';
    }

    return 0;
}