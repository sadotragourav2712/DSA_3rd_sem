#include <stdio.h>
#include <stdlib.h>
int n;
void printgraph(int adj[][n])
{
    printf("The adjacency matrix:\n");
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int s, d;

    printf("Enter the no of the vertices:\n");
    scanf("%d", &n);
    int adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = 0;
        }
    }
    while (s != -1 && d != -1)
    {
        printf("Enter the  node(o to %d) to node(0 to %d) : ", n, n);
        scanf("%d%d", &s, &d);
        adj[s][d] = 1;
        adj[d][s] = 1;
    }
    printgraph(adj);

    return 0;
}