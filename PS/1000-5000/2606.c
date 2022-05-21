#include <stdio.h>

int DFSs[101] = {
    0,
};
int graph[101][101] = {
    0,
};
int cnt = 0;

void DFS(int vertex, int vertices)
{
    DFSs[vertex] = 1;

    for (int i = 1; i <= vertices; i++)
    {
        if (graph[vertex][i] == 1 && DFSs[i] == 0)
        {
            DFS(i, vertices);
            cnt++;
        }
    }
}

int main()
{
    int vertex = 1;
    int vertices, edge, i, j;
    scanf("%d", &vertices);
    scanf("%d", &edge);

    while (edge--)
    {
        scanf("%d %d", &i, &j);
        graph[i][j] = 1;
        graph[j][i] = 1;
    }

    DFS(vertex, vertices);
    printf("%d", cnt);

    return 0;
}