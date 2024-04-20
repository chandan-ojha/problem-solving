#include <stdio.h>
int main()
{
    const double pi = 3.141592653;
    double r;
    scanf("%lf", &r);
    double result = pi * (r * r);
    printf("%.9f", result);
    return 0;
}