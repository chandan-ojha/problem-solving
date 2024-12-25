// Problem Link: https://www.codechef.com/START166D/problems/WRAPGIFTS
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    const int total_paper_area = 1000;
    while (t--)
    {
        int H, L, W;
        cin >> H >> L >> W;

        int surface_area = 2 * (H * L + L * W + W * H);
        int max_gifts = total_paper_area / surface_area;

        cout << max_gifts << "\n";
    }

    return 0;
}