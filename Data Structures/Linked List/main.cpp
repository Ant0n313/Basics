#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Functions.h"
#include "MenuOptions.h"
#include "RunOperations.h"

int main () {

  int run = 1;
  Node* ll = NULL;    // Linked List

  while (run)
  {
    printMenu();
    scanf("%d",&run);
    ll = operate(run, ll);
  }
  
}