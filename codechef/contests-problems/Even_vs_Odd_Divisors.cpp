// Problem link: https://www.codechef.com/START158D/problems/EVENODDDIV

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

        int even_count = 0, odd_count = 0;

        for (int i = 1; i <= n; ++i)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                {
                    even_count++;
                }
                else
                {
                    odd_count++;
                }
            }
        }

        if (even_count > odd_count)
        {
            cout << 1 << endl;
        }
        else if (even_count < odd_count)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}