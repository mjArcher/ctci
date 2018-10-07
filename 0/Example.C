#include <iostream>
#include <stdio.h>

void check (int *h, long *k) {
  *h = 5;
  *k = 6;
  printf("%d\t%d\n", *h, *k); // with strict aliasing turned on there's an assumption that dereferencing pointers to objects of different types will never refer to the same memory location (i.e. alias each other.)"
  printf("%p\t%p", h, k);
}
   

int main (void) {
  long k;
  check((int *)&k, &k);
  return 0;
}
