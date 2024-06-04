#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char c;
        cin >> c;

        string word = "codeforces";

        int isAppears = 0;

        for (char a : word)
        {
            if (c == a)
            {
                isAppears = 1;
                break;
            }
        }

        if (isAppears == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}