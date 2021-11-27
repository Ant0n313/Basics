#include <stdio.h>

#define N 100

void transpose_matrix1(int r1, int c1, int m1[][N]) {
 
  int transpose[N][N];

  for (int i = 0; i < r1; i++)
    for (int j = 0; j < c1; j++)
      transpose[j][i] = m1[i][j];
 
  printf("The Transpose of the Matrix is:\n");
  for (int i = 0; i < r1; i++){
    for (int j = 0; j < c1; j++)
      printf("%d ",transpose[i][j]);
    printf("\n");
  }
 
}

int main () {
  int mat1[N][N], r, c;
 
  printf("please enter rows and coulmns of first matrix: ");
  scanf("%d%d",&r,&c);
  
  printf ("enter the first matrix %d X %d\n", r, c);
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      scanf("%d",&mat1[i][j]);
 
  transpose_matrix1(r,c,mat1);


  return 0;
}

/* 
  sample input:

  3 3
  1 2 3
  4 5 6
  7 8 9

 */
