#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

// I want to be able to solve recursive things like: [ [ [ ] [ ] ] [ ] ]
// https://hackernoon.com/coding-interview-recursion-f0d60c9dbb60

// almost got a simple_recursive string here. 
void simple_recurse(char * pos ) {
    if (*pos != NULL){
      simple_recurse(++pos);
      printf("%c", *pos);
    }
    else
      return;
}

// this doesn't 
  /* printf("%c", *(++a)); // do a pre-increment not a post-increment */
int main() {
  char a_string[] = "this is a string";
  char * a = a_string;
  simple_recurse(a_string);
}
