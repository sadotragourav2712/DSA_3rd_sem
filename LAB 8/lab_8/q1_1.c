#include<stdio.h>
#include<math.h>
char tree[32];
int root(char key) {
  if (tree[0] != '\0')
    printf("Tree already had root");
  else
    tree[0] = key;
  return 0;
}
 
int set_left(char key, int parent) {
  if (tree[parent] == '\0')
    printf("\nNo parents found at %d",(parent * 2) + 1);
  else
    tree[(parent * 2) + 1] = key;
  return 0;
}
 
int set_right(char key, int parent) {
  if (tree[parent] == '\0')
    printf("\nNo parents found at %d",(parent * 2) + 1);
  else
    tree[(parent * 2) + 2] = key;
  return 0;
}
 
int print_tree() {
  printf("\n");
  int n=1;
  for (int i = 1; i < 32; i++) {
    if (tree[i-1] != '\0')
      printf("%c ",tree[i-1]);
    else
      printf("- ");
    if(i == pow(2,n)-1)
    {
        printf("\n");
        n++;
    }
  }
  return 0;
}
int main() {
  root('A');
  set_left('B',0);
  set_right('C', 0);
  set_left('D', 1);
  set_right('E', 1);
  set_right('H', 2);
  set_left('G',2);
  set_left('F',4);
  set_left('J',6);
  set_right('K',6);
  set_left('L',13);
  printf("\nLevel order traversal:- \n");
  print_tree();
  return 0;
}