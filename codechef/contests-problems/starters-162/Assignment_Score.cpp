// Problem link: https://www.codechef.com/START162D/problems/ASSIGNSCORE
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
        int n;
        cin >> n;

        vector<int> scores(n);
        int current_sum = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> scores[i];
            current_sum += scores[i];
        }

        int total_marks = (n + 1) * 100;
        int passing_marks = total_marks / 2;

        int min_marks_needed = passing_marks - current_sum;

        if (min_marks_needed > 100)
        {
            cout << -1 << '\n';
        }
        else if (min_marks_needed <= 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << min_marks_needed << '\n';
        }
    }

    return 0;
}