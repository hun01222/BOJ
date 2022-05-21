#include <stdio.h>
int arr[301];
int total[301];

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int n, tot = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    total[0] = 0;
    total[1] = arr[1];
    total[2] = arr[1] + arr[2];

    for (int i = 3; i <= n; i++)
    {
        total[i] = arr[i] + max(total[i - 2], arr[i - 1] + total[i - 3]);
    }

    printf("%d\n", total[n]);
    return 0;
}