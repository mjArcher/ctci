#include <iostream> 

using namespace std;

// passing pointers to functions 
//

/* void example_1(in){ */
/*   int */

/* } */

int main(){
  int *x = new int(5);
  cout << x << endl;
  int **y = &x;
  cout << y << endl;
  x = y;
}
