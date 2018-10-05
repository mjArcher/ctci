#include <iostream>

int main() { 
 
  for (int i = 0; i < 10 && i % 2; i++ )
    std::cout << i << std::endl;

  std::cout << 5 % 2 << std::endl;
}
