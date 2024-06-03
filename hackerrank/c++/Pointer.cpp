#include <bits/stdc++.h>
using namespace std;

void update(int *a, int *b)
{
    int sum = *a + *b;
    int dif = *a - *b;
    cout << sum << endl;
    cout << abs(dif) << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;

    update(&a, &b);

    return 0;
}