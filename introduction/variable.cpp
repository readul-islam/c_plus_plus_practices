/* variables has 3 parts:
1.declaration
2. initialization
3. definitition = declaration + initialization

*/

// question : we have to variable with same name one variable global variable
// and another one local variable . if we want to print the name of same
// variable which one will execute in our compiler.

// ans:c++ compiler will print the local variable if we want to print inside our
// local scope . if we want to print same name of global variable we can use
// scope resolution operator.

#include <iostream>
using namespace std;

// global variable
int global = 5;

int main() {
   // local variables
   int global = 10;
   int i;            // variable declaration
   i = 0;            // variable initialization
   int sum = 2 + 3;  // variable definitition

   cout <<"local variable "<< global << endl;
   cout << "global variable " << ::global;
}