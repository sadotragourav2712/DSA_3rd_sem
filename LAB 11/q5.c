#include<stdio.h>
#include<stdlib.h>
#define NODE 5

int graph[NODE][NODE] = {
        {0,1,0,0,1},
        {1,0,1,0,0},
        {0,1,0,0,0},
        {0,0,0,0,1},
        {1,0,0,1,0}
    };
/* for graph as tree case.    
{
   {0, 1, 1, 1, 0},
   {1, 0, 1, 0, 0},
   {1, 1, 0, 0, 0},
   {1, 0, 0, 0, 1},
   {0, 0, 0, 1, 0}
};
*/

                                                               
int isCycle(int u, int visited[], int parent) {
   visited[u] = 1;    
   for(int v = 0; v<NODE; v++) {
      if(graph[u][v]) {
         if(visited[v] == 0) {     
            if(isCycle(v, visited, u) == 1) {
               return 1;
            }
         } else if(v != parent) {    
            return 1;   
         }
      }
   }
   return 0;
}

int isTree() {
   int *vis = malloc(NODE*sizeof(int));
   for(int i = 0; i<NODE; i++)
      vis[i] = 0;    
         
   if(isCycle(0, vis, -1) == 1)    
      return 0;
         
   for(int i = 0; i<NODE; i++) {
      if(vis[i] == 0)   
         return 0;
   }
   return 1;
}

int main() {
   if(isTree() == 0)
      printf("Graph is a Tree");
   else
      printf("The Graph is not a Tree.");
}