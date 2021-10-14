#include <stdio.h>
#define mod 1000000000

long long dp[10], temp[10];

long long find(int n)
{
    long long sum = 0;
    for (int i = 0; i < 10; i++)
    {
        dp[i] = 1;
        dp[0] = 0;
        temp[i] = dp[i];
    }
    for (int i = 0; i < n; i++)
    {
        temp[0] = dp[1];
        temp[9] = dp[8];
        for (int j = 1; j < 9; j++)
        {
            temp[j] = (dp[j - 1] + dp[j + 1]) % mod;
        }
        for (int j = 0; j < 10; j++)
        {
            dp[j] = temp[j];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        sum += dp[i];
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%lld", find(n - 1) % mod);
    return 0;
}