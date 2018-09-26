#include <string>
#include <iostream> 
#include <cstdlib> 
#include <cstdio> 

using namespace std;
int main()
{
  string a_string = "a_string"; 
  for(int i = 0; ;i++){
    /* cout << a_string[i] << endl; */ 
    /* cout << a_string[i] << '\t' << (int)a_string[i] << endl; */
    cout << a_string[i];
    if (a_string[i] == NULL)
      break;
  }
  cout << endl;

  int i = 0;
  while (a_string[i] != NULL){
    /* std::printf("%c", a_string[i]); */
    std::printf("%c\t%d\n", a_string[i], a_string[i]);
    i++;
  }

}
