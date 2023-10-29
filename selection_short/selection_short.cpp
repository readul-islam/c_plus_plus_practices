#include <iostream>
using namespace std;

void selection_sort(int *arr, int size) {

   for (int i = 0; i < size - 1; i++) {

      int minIndex = i;
      for (int j = i + 1; j <= size - 1; j++) {
         if (arr[j] < arr[minIndex]) 
            minIndex = j;
         
      }
      swap(arr[minIndex], arr[i]);
   }
}

int main() {

   int arr[6] = {6, 5, 2, 7, 1, 3};
   int size = 6;

   for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
   }
    cout << endl;
   selection_sort(arr, size);
   for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
   }
   return 0;
}