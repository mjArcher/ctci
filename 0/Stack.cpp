#include <iostream> 
#include <stdio.h>
#include <stdlib.h> // or <csdtlib>
#include <map>
#include <string>
#include "Stack.h"

using namespace std;
int main()
{
  Stack stack;
  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);
  stack.print();
}
