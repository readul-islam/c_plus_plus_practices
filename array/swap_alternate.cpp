#include <iostream>
using namespace std;

// swap alternate
// example: input ={ 4,6,9,10,11,12}
//         output ={ 6,4,10,9,12,11}

int main() {

   int arr[6] = {4, 6, 9, 10, 11, 16};
   int size = 6;
   int start = 0;
   int end = start + 1;
   int temp;

   while (start < (size - 1)) {

      swap(arr[start], arr[end]);
      /*
      same as above swap code ;
             temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
      */

      start = end + 1;
      end = start + 1;
   }
   for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;

   return 0;
}