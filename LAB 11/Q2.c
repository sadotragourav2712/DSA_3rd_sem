#include <stdio.h>
#include <stdlib.h>
int n;
void printgraph(int adj[][n])
{
    printf("The adjacency matrix:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
}
void bfs(int adj[][n],int n, int start){
    
}
int main()
{
    int ch, start;
    int adj[n][n];
    int s, d;
    // int adj[n][n];
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
    while (1)
    {
        printf("Enter 1 for BFS traversal\nEnter 2 for Dfs traversal\nEnter 3 for display\nEnter 4 for exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:

            printf("Enter the nod from where you want to start:\n");
            scnaf("%d", &start);
            bfs(adj, n, start);
            break;
        case 2:
            printf("Enter the node where you want to start from:\n");
            scanf("%d", &start);
        case 3:
            printgraph(adj);
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("invalid entry:\n");
        }
    }
}