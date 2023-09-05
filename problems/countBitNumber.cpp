// input unsigned number
// print how much 1 bit has in unsigned number
// output 3 or 4 or 5 etc

#include <iostream>
using namespace std;

int main() {
   int n = 00000000000000000000000000001111, count = 0;

   while (n != 0) {
      if (n & 1) {
         count++;
      }
      n = n >> 1;
   }

   cout << count;
}