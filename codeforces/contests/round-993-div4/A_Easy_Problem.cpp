// Problem Link: https://codeforces.com/contest/2044/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> results;

    while (t--)
    {
        int n;
        cin >> n;

        results.push_back(n - 1);
    }

    for (int result : results)
    {
        cout << result << endl;
    }

    return 0;
}