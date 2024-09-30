#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    ll factorial = fact(n - 1);
    return factorial * n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll ans = fact(n);
        cout << ans << endl;
    }

    return 0;
}