#ifndef STACK.H
#define STACK.H

// Stack is a LIFO structure
// it extends Vector (java)
// remember that new calls the default constructor
// what happens if we don't call new?

class Node {
  public:
    int data;        
    Node* next; 
};

class Stack { 
  public:
    Stack(); 
    ~Stack();

    void push(int);
    int pop();
    bool empty();

    Node* head = NULL;
};

// could do some crazy initializer list here?
Stack::Stack(){};

Stack::~Stack(){};

//pushes a new 
void Stack::push(int data){
  if(head == NULL) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    head = newNode;
  }
  else {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
  }
}

void Stack::pop(){

}

#endif 
