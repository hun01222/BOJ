#include <stdio.h>

// long long fibo(int n)
// {
//     long long memo[1000] = {
//         0,
//     };
//     if (n <= 1)
//     {
//         return 1;
//     }
//     else if (memo[n] != 0)
//     {
//         return memo[n];
//     }
//     else
//     {
//         memo[n] = (fibo(n - 1) + fibo(n - 2)) % 15746;
//         return memo[n];
//     }
// }

long long fibo(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
    {
        long long a = 1, b = 1, c;
        for (int i = 1; i < n; i++)
        {
            c = (a + b) % 15746;
            a = b;
            b = c;
        }
        return c;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld", fibo(n));

    return 0;
}