// Problem link: https://www.codechef.com/START162D/problems/CALINTAKE
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    int consumed_calories = y * z;

    if (consumed_calories > x)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << x - consumed_calories << endl;
    }

    return 0;
}