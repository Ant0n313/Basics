#include <stdio.h>

#define N 100

void sum_inverse_diagonal(int r,int c, int m1[][N]){
  if (r != c) {
    printf("sorry can't preform this opertion\nWrong Dimensions!");
    return;
  }
  int n = r;
  int sum = 0;
  for (int i = 0; i < n; i++){
    int j = n - 1 - i;
      sum += m1[i][j];
  }
    
  printf ("Sum of inverse diagonal = %d", sum);
 
}
int main () {
  int mat1[N][N], r, c;
 
  printf("please enter rows and coulmns of first matrix: ");
  scanf("%d%d",&r,&c);
  printf ("enter the first matrix %d X %d\n", r, c);
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      scanf("%d",&mat1[i][j]);
 
  sum_inverse_diagonal(r,c,mat1);

  return 0;
}

/* 
  sample input:

  3 3
  1 2 3
  4 5 6
  7 8 9

 */
