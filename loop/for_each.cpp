#include <algorithm>
#include <iostream>
using namespace std;

void printDigit(int n) { cout << n; };

int main() {

   int i = 0;
   int size = 5;
   int arr[5] = {1, 2, 3, 4, 5};

   for_each(arr, arr + 5, printDigit);
   cout << endl;
   for (auto d : arr) {
      cout << d;
   }

   return 0;
}