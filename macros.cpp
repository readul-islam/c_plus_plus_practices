#include <iostream>
using namespace std;

/*
Macros are a piece of code in a program that is given some name. Whenever the
compiler encounters this name, the compiler replaces the name with the actual
piece of code. The ‘#define’ directive is used to define a macro.
*/

// definition of macros
#define total 5

//macros with parameters
#define Area(l, b)(l*b)

int main() {

   for (int i = 1; i <= total; i++) {
      cout << i << " ";
   }
    cout << endl;
   int l = 10, b =5;
    int a = Area(l, b);
    cout << a << " ";

   return 0;
}