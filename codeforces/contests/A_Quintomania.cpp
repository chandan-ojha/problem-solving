// Problem link: https://codeforces.com/contest/2036/problem/A
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

        vector<int> notes(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> notes[i];
        }

        bool isPerfect = true;
        for (int i = 1; i < n; ++i)
        {
            int interval = abs(notes[i] - notes[i - 1]);
            if (interval != 5 && interval != 7)
            {
                isPerfect = false;
                break;
            }
        }

        if (isPerfect)
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