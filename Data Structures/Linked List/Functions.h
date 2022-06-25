#ifndef Functions_H
#define Functions_H

struct Node
{
  int data;
  Node* next;
};

int size(Node* h){
  int cnt = 0;
  while (h != NULL){
    cnt++;
    h = h->next;
  }
  return cnt;
}

Node* insertLast (Node* h, int d){
  if (h == NULL){
    h = (Node*)malloc(sizeof(Node));
    h -> next = NULL;
    h -> data = d;
  } else {
    Node* it = h;
    while (it->next != NULL)
      it = it->next;

    Node* tmp = (Node*)malloc(sizeof(Node));
    tmp -> next = NULL;
    tmp -> data = d;

    it -> next = tmp;
  }
  return h;
}

Node* insertFirst (Node* h, int d) {
  if (h == NULL){
    h = (Node*)malloc(sizeof(Node));
    h -> data = d;
    h -> next = NULL;
  } else {
    Node* tmp = (Node*)malloc(sizeof(Node));
    tmp -> data = d;
    tmp -> next = h;
    h = tmp;
  }
  return h;
}

Node* insertMiddle(Node* h, int d, int pos) {
  if(pos == 1)
    h = insertFirst(h,d);
  else if (size(h)+1 == pos)
      h = insertLast(h,d);
  else if(size(h) < pos)
    printf("You are searching in  %d while linked list size is %d\n",pos,size(h));
  else {
    Node* it = h;
    for (int i = 0; i < pos-2; i++)
      it = it->next;
    Node* tmp = (Node*)malloc(sizeof(Node));
     tmp -> data = d;
     tmp -> next = it->next;
     it->next = tmp;
  }
  return h;
}

Node* DeleteFirst(Node* h) {
  if(h == NULL){
    return h;
  }
  Node* tmp = h -> next;
  free(h);
  h = tmp;
  return h;
}

Node* DeleteMiddle(Node* h, int pos){

}

Node* DeleteLast(Node* h) {
  if (h == NULL) {
    return h;
  }else if (h->next == NULL) {
    free(h);
    h = NULL;
  } else{
    Node* it = h;
    
    while (it->next->next != NULL)
      it = it->next;
    
    free(it->next);
    it->next = NULL;
  }
  
  return h;
}

// 1 circular - 2 Cyclic - 0 ok
int circularOrCyclic(Node* h){
  if (h == NULL || h -> next == NULL)
    return 0;                           // OK
  
  Node* slow = h ->next;
  Node* fast = h->next->next;

  while (fast != NULL && fast->next != NULL){
    if (slow == fast)
      break;
    slow = slow->next;
    fast = fast->next->next;
  }

  if (slow == fast){
    if(slow == h)
      return 1;         // Circular
    else
      return 2;         // Cyclic
  }
  return 0;             // OK
}

void print_LL(Node* h) {
  if (h == NULL) 
    printf("The Linked List is Empty\n\n");
  else {
    Node* it = h;
    while (it != NULL) {
      printf("[%d]->",it->data);
      it = it->next;
    }
    printf("NULL\n\n");
  }
  return;
}
#endif 