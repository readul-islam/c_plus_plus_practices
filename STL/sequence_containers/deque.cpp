#include <deque>
#include <iostream>
using namespace std;

/*
In C++, the STL deque is a sequential container that provides the functionality
of a double-ended queue data structure.
 */
/*
we can insert and remove elements from both the front and rear.
 */

int main() {

   // initialize the deque
   deque<int> list(10,10);
    for (int i : list) {
      cout << i << " ";
   }
   cout << endl;

   // method 1: initializer list
   deque<int> deque1 = {1, 2, 3, 4, 5};

   // method 2: uniform initialization
   deque<int> deque2{1, 2, 3, 4, 5};

   // Print deque deque1;
   for (int i : deque1) {
      cout << i << " ";
   }
   cout << endl;

   deque1.push_back(100);
   deque1.push_front(400);

   // Print deque deque1 after pushing new elements;
   for (int i : deque1) {
      cout << i << " ";
   }
   cout << endl;

   deque1.pop_back();
   deque1.pop_front();
   // Print deque deque1 after removing ;
   for (int i : deque1) {
      cout << i << " ";
   }
   cout << endl;
   cout << deque1.at(0) << " " << deque1[2] <<endl;
   return 0;
}