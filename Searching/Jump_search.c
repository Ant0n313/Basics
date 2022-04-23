#include <stdio.h>
#include <math.h>

int JumpSearch(int A[], int n, int key) {
  int lastidx = 0;
  int step = sqrt(n);

  while (A[step] < key && step < n){
    lastidx = step;
    step += (int)sqrt(n);
    if (step >= n) 
      return -1;
  }

  for (int i = lastidx; i <= step; i++) 
    if (A[i] == key)
      return i;
    
  return -1;
}

int main () {
  int A[] = {0,1,1,4,8,9,12,45,66,78};
  
  int x = 12;
  int n = sizeof(A) / sizeof(A[0]);

  int ans = JumpSearch(A, n, x);
  if (ans == -1)
    printf("Sorry this number not found!");
  else
    printf ("%d found in index %d", x, ans);

  return 0;
}