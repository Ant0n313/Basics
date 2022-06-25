#ifndef Operations_H
#define Operations_H

int op, d;

Node* operate (int run, Node* ll){
  if (run == 1){        // Insertion
      postion();
      printf("Where would you like to insert the number: ");
      scanf("%d",&op);
      printf("Please enter the number: ");
      scanf ("%d", &d);
    
      if (op == 1) 
        ll = insertFirst (ll, d);
      else if (op == 2){
        int pos; 
        printf("Enter postion you like to add in: ");
        scanf("%d",&pos);
        ll = insertMiddle(ll, d, pos);
      }
      else if (op == 3)
        ll = insertLast(ll, d);
    
    } else if (run == 2) {             // Deletion
      printf("Where would you like to delete the number\n");
      postion();
      scanf("%d",&op);
      if (op == 1)
        ll = DeleteFirst(ll);
      else if (op == 2){
        int pos;
        scanf ("%d",&pos);
        ll = DeleteMiddle(ll, pos);
      }
      else if (op == 3) {
        ll = DeleteLast(ll);
      }
    } else if (run == 3) {              // Print Linked List
      print_LL(ll);
    } else if (run == 4) {
      int ans = circularOrCyclic(ll);
      if (ans == 1)
        printf("The Linked List is Circular!\n");
      else if (ans == 2)
        printf("The Linked List Have Cycle!\n");
      else
        printf("Linked list nither circular or cyclic\n");
    }
  return ll;
}

#endif 