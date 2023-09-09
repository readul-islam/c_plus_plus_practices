#include <iostream>
#include <stack>
using namespace std;

/*

The STL stack provides the functionality of a stack data structure in C++.

The stack data structure follows the LIFO (Last In First Out) principle. That
is, the element added last will be removed first.

 */

int main() {
   // create a stack of strings
   stack<string> languages;

   // add element to the Stack
   languages.push("C++");
   languages.push("Java");
   languages.push("Python");

   // Print top elements of the stack;
   cout << languages.top() << endl;

   //remove elements from the stack

   languages.pop();

   // after remove top elements of the stack;
   cout << languages.top() << endl;


   return 0;
}