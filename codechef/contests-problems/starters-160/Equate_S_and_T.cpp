// Problem link: https://www.codechef.com/START160D/problems/EQUATEST (Not Solved)
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
        int n, m;
        cin >> n >> m;
        string str1, str2;
        cin >> str1 >> str2;

        if (str1[n - 1] != str2[m - 1])
        {
            cout << "No\n";
            continue;
        }

        int countB_str1 = 0, countB_str2 = 0;

        for (int i = 0; i < n; ++i)
        {
            if (str1[i] == 'b')
            {
                countB_str1++;
            }
        }
        for (int i = 0; i < m; ++i)
        {
            if (str2[i] == 'b')
            {
                countB_str2++;
            }
        }

        if (countB_str1 == countB_str2)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}