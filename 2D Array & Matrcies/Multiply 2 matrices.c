#include <stdio.h>

#define N 100

void multiply(int r1, int c1, int r2, int c2, int m1[][N], int m2[][N]) {
  //HOW to multiply 2 matrcies -> https://d138zd1ktt9iqe.cloudfront.net/media/seo_landing_files/multiplication-of-matrices-formula-1627879160.png
  if (c1 != r2) {
    printf("sorry can't preform this opertion\nWrong Dimensions!");
    return;
  }
  int mult[N][N];
  for (int i = 0; i < r1; i++)
    for (int j = 0; j < c2; j++)
      for (int k = 0; k < c1; k++)
        mult[i][j] += m1[i][k] * m2[k][j];
 
  for (int i = 0; i < r1; i++){
    for (int j = 0; j < c2; j++)
      printf("%d ",mult[i][j]);
    printf("\n");
  }
 
}

int main () {
  int mat1[N][N], mat2[N][N], r1, r2, c1, c2;
 
  printf("please enter rows and coulmns of first matrix: ");
  scanf("%d%d",&r1,&c1);
  printf ("enter the first matrix %d X %d\n", r1, c1);
  for (int i = 0; i < r1; i++)
    for (int j = 0; j < c1; j++)
      scanf("%d",&mat1[i][j]);
 
 
  printf("please enter rows and coulmns of second matrix: ");
  scanf("%d%d",&r2,&c2);
  printf ("enter the second matrix %d X %d\n", r2, c2);
  for (int i = 0; i < r2; i++)
    for (int j = 0; j < c2; j++)
      scanf("%d",&mat2[i][j]);

  multiply(r1,c1,r2,c2,mat1,mat2);

  return 0;
}

/* 
  sample input:

  3 3
  1 2 3
  4 5 6
  7 8 9

 */
