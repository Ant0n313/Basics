// Bubble Sort 

#include <stdio.h>

void BubbleSort (int A[], int n) {
  int temp;
  for (int i = 0; i < n-1; i++){ // number of passes = number of elements - 1
    for (int j = 0; j < n - 1 - i ; j++){ // n - 1 - i becuase we make sure after each pass w get a large element at the end
      if (A[j] > A[j+1]) { // swap (to get the larger number at the end)
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }
  }
}

void printArray(int A[],int n) {
  for (int i = 0; i < n; i++)
  {
    printf("%d ",A[i]);
  }
  
}

int main(void){

  int A[] = {4,2,18,1,6,7};
  int n = sizeof(A) / sizeof(A[0]); // to get the size of the array

  BubbleSort(A,n);
  printArray(A,n);
  return 0;
}
