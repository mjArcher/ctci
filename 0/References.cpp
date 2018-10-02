#include <iostream>

using namespace std;

int main(){
  int x = 99; 
  int y = 103;
  int &z = x;
  std::cout << x << " " << y << " " << z << std::endl;
  z = y;
  std::cout << x << " " << y << " " << z << std::endl;

  const int xx = 10;
  int const &zz = xx;
}
