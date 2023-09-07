#include <iostream>
using namespace std;

int min(int arr[], int size) {
   int min = arr[0];

   for (int i = 1; i < size; i++) {
      if (arr[i] < min) {
         min = arr[i];
      }
   }

   return min;
}

int max(int arr[], int size) {
   int max = arr[0];
   for (int i = 1; i < size; i++) {
      if (arr[i] > max) {
         max = arr[i];
      }
   }

   return max;
}




int main() { 
   
   int nums [10] = {40,65,12,74,48,11,21,101,120,400};
   int len = sizeof(nums) / sizeof(int);
 
   cout << "min Number: " << min(nums, len) << endl;
   cout << "max Number: " << max(nums, len) << endl;


   return 0; 
   
   
   
   }