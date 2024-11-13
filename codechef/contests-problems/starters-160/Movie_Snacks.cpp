// Problem link: https://www.codechef.com/START160D/problems/MOVPR
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    int cost_individual = 2 * x + 3 * y;
    int cost_combo = 2 * z + y;
    int minimum_cost = min(cost_individual, cost_combo);

    cout << minimum_cost << endl;

    return 0;
}