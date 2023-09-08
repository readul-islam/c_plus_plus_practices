#include <iostream>
using namespace std;

int main() {

   int arr[6] = {1, 2, 3, 4, 5, 6};
   int size = 6;
   int start = 0;
   int end = size - 1;
   int temp;

   while (start <= end) {
      for (int i = 0; i < size; i++) {
         cout << arr[i] << " ";
      }
      cout << endl;
      temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;

      start++;
      end--;
   }

   return 0;
}