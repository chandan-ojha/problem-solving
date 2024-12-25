// Problem Link: https://www.codechef.com/START166D/problems/BORROWBOOK
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
        ll n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        vector<int> max_penalty(100001, 0);

        for (int i = 0; i < n; ++i)
        {
            int day = a[i];
            int penalty = i + 1;
            max_penalty[day] = max(max_penalty[day], penalty);
        }

        ll total_penalty = 0;

        for (int penalty : max_penalty)
        {
            total_penalty += penalty;
        }

        cout << total_penalty << endl;
    }

    return 0;
}