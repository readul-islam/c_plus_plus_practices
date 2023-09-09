#include <iostream>
#include <queue>
using namespace std;

/*
In C++, the STL queue provides the functionality of a queue data structure.

The queue data structure follows the FIFO (First In First Out) principle where
elements that are added first will be removed first.

 */

int main() {
   // create a queue of int
   queue<int> nums;

   // push element into the queue
   nums.push(1);
   nums.push(2);
   nums.push(3);

   // get the element at the front
   int front = nums.front();
   cout << "First element: " << front << endl;

   // get the element at the back
   int back = nums.back();
   cout << "Last element: " << back << endl;
    nums.pop();
   cout << "First element: " << nums.front() << endl;

   return 0;
}