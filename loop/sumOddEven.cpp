#include <iostream>
using namespace std;

int main() {
   int n, sumEven = 0, sumOdd = 0, rem;
   cin >> n;
   while (n != 0) {
      rem = n % 10;
      if (rem % 2) {
         sumOdd += rem;
      } else {
         sumEven += rem;
      }
      n = n / 10;
   }
   cout << sumEven << "    " << sumOdd << endl;
   return 0;
}