#include <iostream>
using namespace std;

int lastIndex(int arr[], int n) {
   int index = -1;
   for (int i = 0; i < n; i++) {
      if (arr[i] == n) {
         index = i;
      }
   }

   if (!index) {
      return index;
   }

   return index;
}

int main() {

   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   int find;
   cin >> find;
   int index = lastIndex(arr, find);

   cout << index;

   return 0;
}