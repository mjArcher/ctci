#include "LinkedList.H"
#include <stdio.h>

int main(){
  printf("Hello world\n"); 
  Node * head = new Node(10);
  head->appendToTail(15);
  head->appendToTail(20);
  head->appendToTail(25);

  // when we're deleting a node of a specific value 'd', there's always a chance we could accidentally delete the head node. 
  // so we need to create a new head when we delete
  //
  // can't we use this?

  head->printAll();
  head = head->deleteNode(head, 20);
  head->printAll();

}
