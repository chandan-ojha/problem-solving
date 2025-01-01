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
        string s;
        cin >> n >> s;

        int blocks = 1;

        for (int i = 1; i < n; ++i)
        {
            if (s[i] != s[i - 1])
            {
                blocks++;
            }
        }

        if (blocks > 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << n << endl;
        }
    }

    return 0;
}