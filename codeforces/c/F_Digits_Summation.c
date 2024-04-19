#include <stdio.h>
int main()
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    long long int ld1 = n % 10;
    long long int ld2 = m % 10;
    long long int sum = ld1 + ld2;
    printf("%lld", sum);
    return 0;
}