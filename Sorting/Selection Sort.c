#include <stdio.h>
// Selection Sort 
// Worst Complexity O(n^2)

void SelectionSort (int A[], int n) {
  int temp;
  for (int i = 0; i < n; i++){
    int minidx = i;
    for (int j = i+1; j < n; j++){
      if (A[j] < A[minidx])
        minidx = j;
    }
    temp = A[minidx];
    A[minidx] = A[i];
    A[i] = temp;
  }
}

void printArray(int A[],int n) {
  for (int i = 0; i < n; i++)
    printf("%d ",A[i]);
}

int main(void){

  int A[] = {4,2,18,1,6,7};
  int n = sizeof(A) / sizeof(A[0]); // to get the size of the array

  SelectionSort(A,n);
  printArray(A,n);

  return 0;
}


