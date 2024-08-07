#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;
        int div = num / 10;
        int rem = num % 10;
        int result = div + rem;
        cout << result << endl;
    }

    return 0;
}