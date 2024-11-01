// Problem link: https://codeforces.com/problemset/problem/1907/B
/**
 Not Solve (Time limit exceeded on test 3)
 **/

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
        string str;
        cin >> str;
        string result;

        for (char ch : str)
        {
            if (ch == 'b')
            {
                int sz = result.size() - 1;

                for (int i = sz; i >= 0; i--)
                {
                    if (result[i] >= 'a' && result[i] <= 'z')
                    {
                        result.erase(i, 1);
                        break;
                    }
                }
            }
            else if (ch == 'B')
            {
                int sz = result.size() - 1;

                for (int i = sz; i >= 0; i--)
                {
                    if (result[i] >= 'A' && result[i] <= 'Z')
                    {
                        result.erase(i, 1);
                        break;
                    }
                }
            }
            else
            {
                result += ch;
            }
        }

        cout << result << endl;
    }

    return 0;
}