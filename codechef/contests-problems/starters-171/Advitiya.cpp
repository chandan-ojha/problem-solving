#include <bits/stdc++.h>
using namespace std;
int min_steps_to_convert(const string &s)
{
    string target = "ADVITIYA";
    int steps = 0;

    for (int i = 0; i < 8; ++i)
    {
        int diff = (target[i] - s[i] + 26) % 26;
        steps += diff;
    }

    return steps;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        cout << min_steps_to_convert(s) << "\n";
    }

    return 0;
}