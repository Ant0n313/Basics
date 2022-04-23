#include <stdio.h>
#include <math.h>

int LinearSearch(int A[], int n, int key) {
  for (int i = 0; i < n; i++) 
    if (A[i] == key)
      return i;
    
  return -1;
}

int main () {
  int A[] = {4,1,5,44,2,3,88,9,70,25};
  
  int x = 44;
  int n = sizeof(A) / sizeof(A[0]);

  int ans = LinearSearch(A, n, x);
  if (ans == -1)
    printf("Sorry this number not found!");
  else
    printf ("%d found in index %d", x, ans);

  return 0;
}