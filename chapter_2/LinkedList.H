#ifndef LINKEDLIST.H
#define LINKEDLIST.H

#include <stddef.h>
#include <stdio.h>
// NULLptr is C++11 only 

class Node {
  Node * next = NULL;
  int data;

  public:
    Node(int d){
      data = d;
    }

  void appendToTail(int d) {
    Node * end = new Node(d);
    Node * n = this;
    while (n->next != NULL){
      n = n->next;
    }
    n->next = end;
  }

  Node* deleteNode(Node* head, int d){
    Node * n = head;

    if (n->data == d) {
      return head->next; // moved head 
    }

    while (n->next != NULL) {
      if (n->next->data == d) {
        n->next = n->next->next;
        return head; // head didn't change
      }
      n = n->next;
    }
    return head;
  }

  void printAll() {
    Node * n = this;

    while (n->next != NULL) {
      printf("%d\n", n->data);
      n = n->next;
    }
    printf("%d\n", n->data);

  }

};
#endif
