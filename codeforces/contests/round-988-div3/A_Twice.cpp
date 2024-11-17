// Problem link: https://codeforces.com/contest/2037/problem/A
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
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<int, int> freq;

        for (int x : a)
        {
            freq[x]++;
        }

        int score = 0;

        for (auto p : freq)
        {
            score += p.second / 2;
        }

        cout << score << "\n";
    }

    return 0;
}