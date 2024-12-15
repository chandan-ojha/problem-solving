// Problem Link: https://codeforces.com/contest/2044/problem/B
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
        string a;
        cin >> a;

        reverse(a.begin(), a.end());

        for (char &ch : a)
        {
            if (ch == 'p')
            {
                ch = 'q';
            }
            else if (ch == 'q')
            {
                ch = 'p';
            }
        }

        cout << a << endl;
    }

    return 0;
}