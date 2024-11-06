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
        int n, x;
        cin >> n >> x;

        int evenCount = n / 2;
        int oddCount = n - evenCount;

        if (x % 2 == 0)
        {
            cout << evenCount - 1 << endl;
        }
        else
        {
            cout << oddCount - 1 << endl;
        }
    }

    return 0;
}