// Problem link: https://www.codechef.com/START161D/problems/NUGGET
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    int totalMoney = (x * 5000) + (y * 9800);

    cout << totalMoney << endl;

    return 0;
}