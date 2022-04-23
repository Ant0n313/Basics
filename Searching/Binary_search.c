#include <stdio.h>
#include <math.h>

int BinarySearch(int A[], int n, int key) {
  int l = 0;
  int r = n-1;
  while (l <= r){
    int m = (l + r) / 2;
    if (A[m] == key) 
      return m;
    else if (A[m] > key)
      r = m - 1;
    else if (A[m] < key)
      l = m + 1;
  }
  return -1;
}

int main () {
  int A[] = {1,2,3};
  
  int x = 3;
  int n = sizeof(A) / sizeof(A[0]);

  int ans = BinarySearch(A, n, x);
  if (ans == -1)
    printf("Sorry this number not found!");
  else
    printf ("%d found in index %d", x, ans);

  return 0;
}