#ifndef STACK_H 
#define STACK_H

// Stack is a LIFO structure
// it extends Vector (java)
// remember that new calls the default constructor
// what happens if we don't call new?

//nested classes 
//class types 
//
//declaration
//definition
//most declarations are definitions (though might not always be the case
//
//instantiation

class Stack { 
  public:
    Stack(); 
    ~Stack();
    
    class Node {
      public:
        int data;        
        Node* next; 
    };

    void push(int);
    int pop();
    bool empty();

    void print();

    Node* head = nullptr;
};

// could do some crazy initializer list here?
Stack::Stack(){};

Stack::~Stack(){};

//pushes a new 
void Stack::push(int data){
  if(!head) { //succeeds if head == NULL
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    head = newNode;
  }
  else {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    std::cout << "added data " << newNode->data << " next data " << newNode->next->data << std::endl;
  }
}

void Stack::print(){
  if (head->next == nullptr){
    std::cout << "Nothing to print" << std::endl;
    return;
  }
  else {
    Node* temp = head;
    for(int i=1;;i++){
      std::cout << i << "\t" << temp->data << std::endl;
      if(temp->next == nullptr)
        break;
      else
        temp = temp->next;
    }
  }
}

int Stack::pop(){
  if (!head) 
    std::cout << "Nothing to remove from Stack" << std::endl;
  else {
    
  }
}

#endif 
