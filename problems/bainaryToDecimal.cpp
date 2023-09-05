#include <math.h>
#include <iostream>
using namespace std;

int main() {

   int n, rem, decimal = 0, i = 0;
   cin >> n;
   while (n != 0) {
      rem = n % 10;
      if (rem != 0) {
         decimal += pow(2, i);
      }
      i++;
      n = n / 10;
   }
   cout << decimal << endl;
}