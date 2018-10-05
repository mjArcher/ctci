#include <iostream> 

using namespace std;
int main(){
  int *x = new int(5);
  cout << x << endl;
  int **y = &x;
  cout << y << endl;
  x = y;
}
