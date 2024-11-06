#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    int maxCones = min(x, y);
    cout << maxCones << endl;

    return 0;
}