#include "LinkedList.H"
#include <stdio.h>

void test_of_linkedlist(){
  printf("Hello world\n"); 
  Node * head = new Node(10);
  head->appendToTail(15);
  head->appendToTail(20);
  head->appendToTail(25);
  /* head->appendToTail(25); */

  // when we're deleting a node of a specific value 'd', there's always a chance we could accidentally delete the head node. 
  // so we need to create a new head when we delete
  //
  // can't we use this?

  /* printAll(head); */
  /* head = head->deleteNode(head, 20); */
  /* head->printAll(); */

  // clean up and delete everything
  /* Node * n = head; */
  /* printf("%d\n", n->data); */
  /* while (n->next != NULL){ */
  /*   n = head->deleteNode(n, n->data); */
  /*   printf("%d\n", n->data); */
  /* } */

  head = head->deleteNode(head, 25);
  printAll(head);
  head = head->deleteNode(head, 20);
  printAll(head);
  head = head->deleteNode(head, 15);
  printAll(head);
  head = head->deleteNode(head, 10);
  printAll(head);
  printf("%d", head);
  delete head;
}

//what happens if we create two pointers with memory
//and then overwrite one with the other
void test_of_pointers(){
  Node* n = new Node(10);
  Node* n1 = new Node(10);
  delete n;
  n = n1;
  printf("%d", n->data);
}

int main(){
  /* test_of_pointers(); */
  test_of_linkedlist();
}
