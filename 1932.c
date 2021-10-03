#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int arr[503][503] = {
        0,
    },
        n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            arr[i + 1][j + 1] += max(arr[i][j], arr[i][j + 1]);
        }
    }

    for (int j = 2; j <= n; j++)
    {
        arr[n - 1][1] = max(arr[n - 1][1], arr[n - 1][j]);
    }
    printf("%d", arr[n - 1][1]);

    return 0;
}