#include <stdio.h>
// Insertion Sort 
// Worst Complexity O(n^2)

void InsertonSort (int A[], int n) {
  int key, j;
  for (int i = 0; i < n; i++){
    key = A[i];
    j = i - 1;
    while (j >= 0 && A[j] > key) {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = key;
  }
}

void printArray(int A[],int n) {
  for (int i = 0; i < n; i++)
    printf("%d ",A[i]);
}

int main(void){

  int A[] = {4,2,18,1,6,7,-3,0};
  int n = sizeof(A) / sizeof(A[0]); // to get the size of the array

  InsertonSort(A,n);
  printArray(A,n);

  return 0;
}

