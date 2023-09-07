#include <iostream>
using namespace std;

int main() {

   int n, isTrue = 0;
   cin >> n;

   if (!(n & 1)) {

      while (n != 0) {

         if (n & 1) {
            cout << "inside" << endl;
            isTrue = 1;
         } else {
            cout << "outside" << endl;
            isTrue = 0;
         }
         n = n >> 1;
      }
   }

   if (isTrue) {
      cout << "True" << endl;
   } else {
      cout << "False" << endl;
   }

   return 0;
}