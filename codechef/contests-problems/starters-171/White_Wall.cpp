#include <bits/stdc++.h>
using namespace std;
int min_operations_to_white_wall(int n, const string &s)
{
    string patterns[6] = {"RGB", "RBG", "GRB", "GBR", "BRG", "BGR"};
    int min_ops = INT_MAX;

    for (const string &pattern : patterns)
    {
        int ops = 0;
        for (int i = 0; i < n; ++i)
        {
            char expected = pattern[i % 3];
            if (s[i] != expected)
            {
                ops++;
            }
        }
        min_ops = min(min_ops, ops);
    }

    return min_ops;
}

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
        string s;
        cin >> s;
        cout << min_operations_to_white_wall(n, s) << "\n";
    }

    return 0;
}