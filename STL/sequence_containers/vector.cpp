#include <iostream>
#include <vector>
using namespace std;

int main() {
   // declaration and initialization ways
   vector<int> num;
   vector<int> num1 = {1, 2, 3, 4, 5, 6, 7, 8};
   vector<int> num3(5, 100);
   vector<int> num4{4, 6, 8, 9, 7, 2};  // Uniform initialization
   //
   num.push_back(1);  // add element end of the list;
   num.push_back(4);
   num.push_back(9);
   num.push_back(8);
   num.push_back(200);
   //
   cout << "how many element can store " << num.capacity()
        << endl;  // capacity how many elements able to store
   cout << "Elements in vector list " << num.size()
        << endl;  // how many elements we have in list

   for (int i : num) {
      cout << i << " ";
   }
   cout << endl;

   cout << "Index 0 position element" << num.at(0)
        << endl;  // access with index

   num.at(0) = 6;  // change position 0 element 0 to 6;
   num[1] = 100;   // change as like array

   for (int i : num) {
      cout << i << " ";
   }
   cout << endl;

   cout << "Print First Element " << num.front() << endl;
   cout << "Print Last Element " << num.back() << endl;

   num.pop_back();  // remove last element from vector

   for (int i : num) {
      cout << i << " ";
   }
   cout << endl;
   cout << "Check vector empty or not " << num.empty() << endl;

   num.clear();  // remove all vector elements not capacity;
   cout << "how many element can store " << num.capacity() << endl;
   cout << "Elements in vector list " << num.size() << endl;

   // vector iterator

   vector<int>::iterator iter1;
   iter1 = num.begin();

   cout << "vector Iterator " << *iter1 << endl;
   iter1 = num.end();
   cout << "vector Iterator " << *iter1 << endl;
   return 0;
}