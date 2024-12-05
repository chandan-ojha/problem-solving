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
        int n, m;
        cin >> n >> m;

        vector<string> words(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> words[i];
        }

        int current_length = 0, word_count = 0;

        for (string word : words)
        {
            if (current_length + word.size() > m)
            {
                break;
            }
            current_length += word.size();
            word_count++;
        }

        cout << word_count << endl;
    }

    return 0;
}