// TODO
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; // number of test cases
    cin >> t;

    while (t--)
    {
        int days;
        cin >> days;

        bool isConsistent = true;

        // Stick's expected workout plan
        vector<tuple<int, int, int>> expected = {
            {2, 3, 10}, // 1st exercise
            {2, 3, 10}, // 2nd exercise
            {2, 3, 10}, // 3rd exercise
            {1, 3, 10}, // 4th exercise
            {3, 3, 9}   // 5th exercise
        };

        for (int i = 0; i < days; ++i)
        {
            for (int j = 0; j < 5; ++j)
            {                // 5 exercises each day
                int x, y, z; // x = exercises, y = sets, z = reps
                cin >> x >> y >> z;

                // Compare with the expected workout plan
                if (make_tuple(x, y, z) != expected[j])
                {
                    isConsistent = false;
                }
            }
        }

        if (isConsistent)
        {
            cout << "Consistent" << endl;
        }
        else
        {
            cout << "Inconsistent" << endl;
        }
    }

    return 0;
}