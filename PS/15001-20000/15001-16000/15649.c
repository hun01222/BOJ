#include <stdio.h>

int N, M;
int result[9] = {
    0,
};
int checklist[9] = {
    0,
};

void DFS(int L)
{
    if (L == M)
    {
        for (int i = 0; i < M; i++)
            printf("%d ", result[i]);
        printf("\n");
    }
    else
    {
        for (int i = 1; i <= N; i++)
        {
            if (checklist[i] == 0)
            {
                result[L] = i;
                checklist[i] = 1;
                DFS(L + 1);
                checklist[i] = 0;
            }
        }
    }
}

int main(void)
{
    scanf("%d %d", &N, &M);
    DFS(0);
}