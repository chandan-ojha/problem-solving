#include <bits/stdc++.h>
using namespace std;
int countSetBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> P(N);
        unordered_map<int, vector<int>> setBitsGroups;

        for (int i = 0; i < N; i++)
        {
            cin >> P[i];
            int setBits = countSetBits(P[i]);
            setBitsGroups[setBits].push_back(P[i]);
        }

        vector<int> sortedP = P;
        sort(sortedP.begin(), sortedP.end());

        bool possible = true;

        for (auto &group : setBitsGroups)
        {
            vector<int> groupNumbers = group.second;
            sort(groupNumbers.begin(), groupNumbers.end());

            int idx = 0;

            for (int i = 0; i < N; i++)
            {
                if (countSetBits(P[i]) == group.first)
                {
                    if (groupNumbers[idx] != sortedP[i])
                    {
                        possible = false;
                        break;
                    }
                    idx++;
                }
            }
            if (!possible)
            {
                break;
            }
        }

        if (possible)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}