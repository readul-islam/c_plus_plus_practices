#include <iostream>
using namespace std;

int main() {

   int num = 5;
   // address of operator -> &;
   cout << "Address of num variable " << &num << endl;

   // created pointer
   int *numPtr;
   // initialize variable address
   numPtr = &num;
   // Print pointer address;
   cout << numPtr << endl;

   // print pointer address of value
   cout << *numPtr << endl;

   // print pointer address of value
//    cout << &numPtr << endl;
   // coping pointer address
   int *ptr = numPtr;

   cout << ptr << endl;
   cout << *ptr << endl;

   ptr = ptr + 1;

   cout << ptr << endl;
   ptr = ptr + 1;

   cout << ptr << endl;

   return 0;
}