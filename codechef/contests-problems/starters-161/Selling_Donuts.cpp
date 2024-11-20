// Problem link: https://www.codechef.com/START161D/problems/DONUTSELL
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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b(m);

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int sad_customers = 0;

        for (int i = 0; i < m; i++)
        {
            int type = b[i] - 1;

            if (a[type] > 0)
            {
                a[type]--;
            }
            else
            {
                sad_customers++;
            }
        }

        cout << sad_customers << endl;
    }

    return 0;
}