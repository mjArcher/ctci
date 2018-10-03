#ifndef LINKEDLIST.H
#define LINKEDLIST.H

#include <stddef.h>
#include <stdio.h>
// nullptr is C++11 only 

// do not confuse linked list with stack. Linked list should be capable of inserting or removing a node at any location in the list.
class Node {
  public:
    Node * next = nullptr;
    int data;

    Node(int d){
      data = d;
    }

    void appendToTail(int d) {
      Node * end = new Node(d);
      Node * n = this;
      while (n->next != nullptr){
        n = n->next;
      }
      n->next = end;
    }

    Node* deleteNode(Node* head, int d){
      // we need to be able to iterate over all the items
      Node * n = head;

      if (n->data == d) {
        // I think the memory leak is here
        Node * temp = n->next;
        delete head;
        head=temp;
        return head; // moved head 
      }

      while (n->next != nullptr) {
        if (n->next->data == d) {
          Node * temp = n->next->next;
          delete n->next;
          n->next = temp;
          return head; // head didn't change
        }
        n = n->next;
      }
      return head;
    }


};

void printAll(Node* head) {
  Node * n = head;
  printf("%c", '\n');
  if (head == nullptr){
    printf("null ptr");  
    return;
  }
  while (n->next != nullptr) {
    printf("%d\n", n->data);
    n = n->next;
  }
  printf("%d\n", n->data);
}
#endif
