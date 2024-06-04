#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int min_n = min({a, b, c});
        int max_n = max({a, b, c});

        int mid;

        if (a > min_n && a < max_n)
        {
            mid = a;
        }
        else if (b > min_n && b < max_n)
        {
            mid = b;
        }
        else
        {
            mid = c;
        }

        cout << mid << endl;
    }

    return 0;
}