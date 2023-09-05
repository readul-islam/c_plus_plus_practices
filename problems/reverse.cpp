#include <math.h>
#include <iostream>
using namespace std;

int main() {
   int n, ans = 0, i = 1;
   cin>> n;
   while (n >= 10) {
      n /= 10;
   }
   cout << n << " " ;
}