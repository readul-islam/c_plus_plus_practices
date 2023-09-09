#include <iostream>
#include <list>
using namespace std;

/*
C++ List is a STL container that stores elements randomly in unrelated
locations. To maintain sequential ordering, every list element includes two
links:

one that points to the previous element
another that points to the next element
 */

int main() {
   list<char> alphabet(10, 'a');
   for (int i : alphabet) {
      cout << i << " ";
   }
   cout << endl;
   list<int> roll = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   list<int> roll1 = {1, 2, 3, 4, 5, 9, 7, 8, 6, 10};

   //    roll.reverse();  // reverse order of elements
   roll.unique();  // remove duplicates
   for (int i : roll) {
      cout << i << " ";
   }
   cout << endl;

   roll.merge(roll1);

   for (int i : roll) {
      cout << i << " ";
   }
   cout << endl;

   roll1.sort();

   for (int i : roll1) {
      cout << i << " ";
   }


   return 0;
}