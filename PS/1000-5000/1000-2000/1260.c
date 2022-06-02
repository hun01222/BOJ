#include <stdio.h>

int DFSs[1001] = {
    0,
};
int BFSs[1001] = {
    0,
};
int graph[1001][1001] = {
    0,
};
int queue[1001];

void DFS(int vertex, int vertices)
{
    DFSs[vertex] = 1;
    printf("%d ", vertex);
    for (int i = 1; i <= vertices; i++)
    {
        if (graph[vertex][i] == 1 && DFSs[i] == 0)
        {
            DFS(i, vertices);
        }
    }
}

void BFS(int vertex, int vertices)
{
    int head, last, pop;
    head = last = 0;
    queue[0] = vertex;
    last++;
    BFSs[vertex] = 1;
    printf("%d ", vertex);
    while (head < last)
    {
        pop = queue[head];
        head++;
        for (int i = 1; i <= vertices; i++)
        {
            if (graph[pop][i] == 1 && BFSs[i] == 0)
            {
                printf("%d ", i);
                queue[last] = i;
                last++;
                BFSs[i] = 1;
            }
        }
    }
}

int main()
{
    int vertices, edges, vertex, i, j;
    scanf("%d %d %d", &vertices, &edges, &vertex);

    while (edges--)
    {
        scanf("%d %d", &i, &j);
        graph[i][j] = 1;
        graph[j][i] = 1;
    }

    DFS(vertex, vertices);
    printf("\n");
    BFS(vertex, vertices);

    return 0;
}
