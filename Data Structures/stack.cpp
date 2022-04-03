#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

struct Stack
{
  int *arr;
  int sp;
  int size;

  // Constructor (from C++)
  Stack()
  {
    arr = NULL;
    sp = -1;
    size = 0;
  }
};

bool initializeStack(Stack *s, int sz)
{
  if (s->arr != NULL) // In case previous malloc is called
    free(s->arr);
  s->arr = (int *)malloc(sizeof(int) * sz);
  if (s->arr == NULL)
    return false;
  s->size = sz;
  s->sp = -1;
  return true;
}

int push(Stack *s, int item)
{
  if (s->arr == NULL)
    return -1; // Stack not initialized !
  if (s->sp + 1 == s->size)
    return -2; // Stack overflow !

  s->sp = s->sp + 1; // or s->sp++;
  s->arr[s->sp] = item;
  return 0;
}

int pop(Stack* s, int* item)
{
	if (s->arr == NULL)
		return -1;	//Stack not initialized !
	if (s->sp == -1)
		return -2;	//Stack underflow !

	*item = s->arr[s->sp];
	s->sp = s->sp - 1;	//s->sp--;
	return 0;
}

int top(Stack* s, int* item)
{
	if (s->arr == NULL)
		return -1;	//Stack not initialized !
	if (s->sp == -1)
		return -2;	//Stack underflow !
	*item = s->arr[s->sp];
	return 0;
}

int size(Stack* s) {
  return ((s->sp)+1);
}

    int main()
{
  Stack s;

  char choice = 'x';
  int item;

  while (choice != '6')
  {
    system("cls");
    printf("\n\n\t1. initialize Stack\n");
    printf("\t2. Push item\n");
    printf("\t3. Pop item\n");
    printf("\t4. Top item\n");
    printf("\t5. Number of items\n");
    printf("\t6. Exit\n");

    printf("\n\nEnter a choice: ");
    choice = getch();

    if (choice == '1')              // initialized Stack
    {
      int size;
      printf("\n\n\tEnter new size: ");
      scanf("%d", &size);
      if(initializeStack(&s, size) == true)
        printf("\n\n\tStack initialized !\n");
      else
        printf("\n\n\tStack cannot be initialized !\n");
    }
    else if (choice == '2')          // Push item
    {
      printf("\n\n\tEnter item: ");
      scanf("%d", &item);

      int result = push(&s, item);
      if (result == -1)
        printf("\n\n\tPlease initialize stack first\n");
      else if (result == -2)         
        printf("\n\n\tStack overflow !\n");
      else
        printf("\n\n\t%d pushed into the stack !\n", item);
    }
    else if (choice == '3')         // Pop item
    {
      int result = pop(&s,&item);
      if (result == -1)
        printf("\n\n\tPlease initialize stack first\n");
      else if (result == -2)
        printf("\n\n\tStack underflow !\n");
      else
        printf("\n\n\t%d popped from the stack !\n", item);
    }
    else if (choice == '4')       // Top item
    {
      int result = top(&s, &item);
      if (result == -1)
          printf("\n\n\tPlease initialize stack first\n");
      else if (result == -2)
        printf("\n\n\tStack is Empty !\n");
      else 
        printf ("\n\n\t%d is on top of the stack",item);
    }
    else if (choice == '5')       // Size of stack
      printf ("\n\n\tNumber of items in stack =  %d",size(&s));
    else {
      printf ("Wrong input");
      Sleep(1000);
      continue;
    }
    Sleep(1500);
  }
  printf ("\n\n\t Good Bye :)");
  return 0;
}
