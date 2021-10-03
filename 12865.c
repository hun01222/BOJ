#include <stdio.h>
#define max(a, b) (a > b ? a : b)

int dp[103][100003] = {
    0,
};
int w[103];
int v[103];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &w[i], &v[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (j - w[i] >= 0)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    printf("%d ", dp[n][k]);

    return 0;
}