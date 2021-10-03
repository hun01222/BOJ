#include <stdio.h>

int map[26][26] = {
    0,
};
int visit[26][26] = {
    0,
}

int
main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%1d", &map[i][j]);
    }

    return 0;
}