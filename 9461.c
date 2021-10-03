#include <stdio.h>

long long pado(int n)
{
    if (n <= 3)
        return 1;
    else
    {
        long long a = 1, b = 1, c = 1, d;
        for (int i = 0; i < n - 3; i++)
        {
            d = a + b;
            a = b;
            b = c;
            c = d;
        }
        return d;
    }
}

int main()
{
    int n, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        printf("%lld\n", pado(n));
    }
    return 0;
}