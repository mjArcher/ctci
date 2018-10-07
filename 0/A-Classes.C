#include <vector>
#include <iostream>

//get an address space with stack at one end and heap at another 
class A { 
  public:
    int a = 3;
};

class B : public A { 
  public: 
    int b = 4;
};


struct C { int c = 3; };
struct D : public C { int d = 4; };

void f(A *a){
  a = new A();
}

class Base { };
class Derived : public Base { };

void fun(Base b) { }
void gun(Base* b) { }
void hun(Base& b) { }


int main(void)
{
  Derived d;
  fun(d);    // all Derived parts silently "sliced" off
  gun(&d);   // OK, a Derived object IS-A Base object
  hun(d);    // also OK, reference also doesn't slice

  //
  A a1;
  B b1;
  a1 = b1;

  std::cout << a1.a << '\t' << b1.a << '\t' << b1.b << std::endl;

  C c1;
  D d1;
  c1 = d1; 
  std::cout << c1.c << '\t' << d1.c << '\t' << d1.d << std::endl;

// A is a subset of B, so only copies only the bit that is common to both when it copies the object
/* std::vector<A> vec; */ 
/* A a; */
/* B b; */
/* vec.push_back(a); */
/* vec.push_back(b); */

// this isn't the same - you can get the members of B by casting
//
// "If you use a container of raw pointers, then the container only needs to copy pointers (faster) and you can add derived instances of the contained type."
/* std::vector<A*> vec; */ 
/* A* a; */
/* B* b; */
/* vec.push_back(a); */
/* vec.push_back(b); */

  /* std::vector<B> vec; */ 
  /* A a; */
  /* B b; */
  /* vec.push_back(a); */
  /* vec.push_back(b); */

  // passing pointers to functions
  // we have to pass by reference or by pointer to pointer
  A* a;
  std::cout << a << std::endl;
  f(a);
  std::cout << a << std::endl;



}
