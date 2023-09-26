
// find key in sorted array
// if exist return index else return -1
#include <iostream>
using namespace std;

int main() {

   int arr[7] = {1, 2, 3, 4, 5, 6, 7};
   int key;
   int start = 0;
   int end = 6;
   cin >> key;

   while (start <= end) {
      int middle = (start + end) / 2;
      if (arr[middle] == key) {
         cout << "index number is " << middle << endl;
         break;
      }
      if (arr[middle] < key) {
         start = middle + 1;
         continue;
      }
      if (arr[middle] > key) {
         end = middle - 1;
         continue;
      }
   }
   if (start > end) {
      cout << "-1";
   }

   return 0;
}