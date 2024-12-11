// Problem Link: https://www.codechef.com/problems/SPC2025Q2
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
        int n, k, p;
        cin >> n >> k >> p;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int ved_height = k + a[n - 1];
        int varun_height = p;

        for (int i = 0; i < n - 1; i++)
        {
            varun_height += a[i];
        }

        if (ved_height > varun_height)
        {
            cout << "Ved" << endl;
        }
        else if (ved_height < varun_height)
        {
            cout << "Varun" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }

    return 0;
}