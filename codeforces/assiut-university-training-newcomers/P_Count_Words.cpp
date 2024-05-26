// TODO
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int word_count = 0;

    while (ss >> word)
    {
        if (word[0] != '!' && word[0] != '.' && word[0] != '?' && word[0] != ',')
        {
            word_count++;
        }
    }

    cout << word_count << endl;

    return 0;
}