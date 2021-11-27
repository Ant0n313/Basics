#include <stdio.h>

#define N 100

void inverse_2X2 (int m1[][N], int r, int c){
  if(r == 2 && c == 2){
    float det = (m1[0][0] * m1[1][1]) - (m1[0][1] * m1[1][0]);

    if (det){ //if det != 0 (aka the matrix has an inverse)
    
      float inverse[2][2];

      inverse[0][0] = m1[1][1];
      inverse[0][1] = -m1[0][1];
      inverse[1][0] = -m1[1][0];
      inverse[1][1] = m1[0][0];

      printf("The inverse of the matrix is:\n");
      for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++)
          printf("%.2f ", (inverse[i][j] / det));
        printf("\n");
      }

    }
    else
      printf("Matrix A doesn't have an Inverse\n");
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
 
  inverse_2X2(mat1,r,c);


  return 0;
}

/* 
  sample input:

  2 2

  3 1 
  4 2

 */
