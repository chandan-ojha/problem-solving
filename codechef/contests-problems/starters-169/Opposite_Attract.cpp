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
        string s, t = "";

        cin >> n >> s;

        for (char c : s)
        {
            t += (c == '0') ? '1' : '0';
        }

        cout << t << endl;
    }

    return 0;
}