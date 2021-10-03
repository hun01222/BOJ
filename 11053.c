#include <stdio.h>

int arr[1001];
int dp[1001];

int find(int n)
{
    int temp, cnt, cnt_temp = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        temp = arr[i];
        cnt = 1;
        for (int j = 0; j < i; j++)
        {
            if (temp < arr[j])
            {
                temp = arr[j];
                cnt++;
            }
        }
        if (cnt > cnt_temp)
        {
            cnt_temp = cnt;
        }
    }

    return cnt_temp;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", find(n));
    return 0;
}