// Problem link: https://www.codechef.com/START158D/problems/DIWALIDISC

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if (b >= a)
    {
        cout << 0 << endl;
    }
    else
    {
        int amount_to_pay = a - b;
        cout << amount_to_pay << endl;
    }

    return 0;
}