#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> h(n);

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    sort(h.begin(), h.end());

    ll required_attack = 0;

    for (int i = 0; i < n; i++)
    {
        required_attack = max(required_attack, h[i] + (n - 1 - i) * x);
    }

    cout << required_attack << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}