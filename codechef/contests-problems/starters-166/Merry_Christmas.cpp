// Problem Link: https://www.codechef.com/START166D/problems/MERRYXMAS
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;
    vector<int> activities = {1, 2, 4};
    int count = 0;

    for (int i = 0; i < activities.size(); i++)
    {
        if (x >= activities[i])
        {
            x -= activities[i];
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << "\n";

    return 0;
}