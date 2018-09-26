#include <iostream> 
#include <stdio.h>
#include <stdlib.h> // or <csdtlib>
#include <map>
#include <string>
/* #include "Stack.h" */

// RANDOM MUSINGS 
// when we're including C header files (with .h) extension, we're not including a namespace (which might be considered bad practices) 
int main()
{
  /* Stack stack; */
  /* stack.push(10); */
  std::cout << "Hello world" << std::endl;
  std::map<char,int> eg;
  eg['a'] = 10;

  // it's fine in C to assign a void* to an int* in C without the need to cast (type-safety). 
  int * a = (int*)malloc(sizeof(int) * 100);
  // in C++ it was designed to be ugly because you aren't meant to use it.
  // so instead of :
  int * b = static_cast<int*>(malloc(sizeof(int)*100));
  // use 
  int * c;
  c = new int;
  int * p = new int(100);

  delete a;
  delete c;

  free(p);
  std::cout << b << std::endl;

  if(b) // this is satisfied regardless 
    std::cout << "memory allocation" << std::endl;
  delete b;

}
