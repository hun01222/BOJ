#include <stdio.h>
#define min(a, b) (a < b ? a : b);

int find(int n)
{
    int dp[1000001] = {
        0,
    },
        temp;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 3 == 0)
        {
            temp = dp[i / 3] + 1;
            dp[i] = min(temp, dp[i]);
        }
        if (i % 2 == 0)
        {
            temp = dp[i / 2] + 1;
            dp[i] = min(temp, dp[i]);
        }
    }

    return dp[n];
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", find(n));
    return 0;
}