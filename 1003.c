// #include <stdio.h>

// int cnt_0 = 0;
// int cnt_1 = 0;

// int fibo(int n)
// {
//     if (n == 0)
//     {
//         cnt_0++;
//         return 0;
//     }
//     else if (n == 1)
//     {
//         cnt_1++;
//         return 1;
//     }
//     else
//     {
//         return fibo(n - 1) + fibo(n - 2);
//     }
// }

// int main()
// {
//     int n, a;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a);
//         fibo(a);
//         printf("%d %d", cnt_0, cnt_1);
//         cnt_0 = 0;
//         cnt_1 = 0;
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int fibo[50][2], n, a;
    fibo[0][0] = 1;
    fibo[0][1] = 0;
    fibo[1][0] = 0;
    fibo[1][1] = 1;

    for (int i = 2; i < 50; i++)
    {
        fibo[i][0] = fibo[i - 1][0] + fibo[i - 2][0];
        fibo[i][1] = fibo[i - 1][1] + fibo[i - 2][1];
    }

    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &a);
        printf("%d %d\n", fibo[a][0], fibo[a][1]);
    }
    return 0;
}