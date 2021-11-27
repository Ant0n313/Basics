#include <stdio.h>

#define N 100

void Sum_of_2_matrcies(int r1, int c1, int r2, int c2, int m1[][N], int m2[][N]) {
  if (r1 != r2 || c1 != c2){ // check if they are equals in rows and coulumns
    printf("sorry can't preform this opertion\nWrong Dimensions!");
    return;
  }

  // preform SUM
  int sum[N][N];
  for (int i = 0; i < r1; i++)
    for (int j = 0; j < c1; j++)
      sum[i][j] = m1[i][j] + m2[i][j];

  // print the sum matrix
  printf("The sum of 2 matrcies is:\n");
  for (int i = 0; i < r1; i++){
    for (int j = 0; j < c1; j++)
      printf("%d ",sum[i][j]);
    printf("\n");
  }
}

int main () {
  int mat1[N][N], mat2[N][N], r1, r2, c1, c2;
 
  printf("please enter rows and coulmns of first matrix: ");
  scanf("%d%d",&r1,&c1);
  printf ("enter the first matrix %d X %d", r1, c1);
  for (int i = 0; i < r1; i++)
    for (int j = 0; j < c1; j++)
      scanf("%d",&mat1[i][j]);
 
 
  printf("please enter rows and coulmns of second matrix: ");
  scanf("%d%d",&r2,&c2);
  printf ("enter the second matrix %d X %d", r2, c2);
  for (int i = 0; i < r2; i++)
    for (int j = 0; j < c2; j++)
      scanf("%d",&mat2[i][j]);
 
  Sum_of_2_matrcies(r1,c1,r2,c2,mat1,mat2);
 
  return 0;
}

/* 
  sample input:

  3 3
  1 2 3
  4 5 6
  7 8 9

  3 3
  9 8 7
  6 5 4
  3 2 1

 */
