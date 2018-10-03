#include <list> 
#include <iostream>
// lists are good because we don't have to resize the array all the time
// also can add things to the start quite easily 
int main(){
  int myints[] = {16, 2, 77, 1, 7, 8};
  std::list<int> my_list (myints, myints + sizeof(myints) / sizeof(int));
  std::list<int>::iterator it;
  
  it = my_list.begin();
  ++it;
  my_list.insert(it,10);
  for (it = my_list.begin(); it!=my_list.end();++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;

  // we can't do this 
  /* std::cout << my_list[0] << std::endl; */
}
