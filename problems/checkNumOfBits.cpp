#include <iostream>
using namespace std;

int countSetBit(int n) {
   int ans=0;
   while (n != 0) {
      if (n & 1) {
         ans += 1;
      }
      n = n >> 1;
   }
   return ans;
}

int main() {

   int n1, n2;
   cin >> n1 >> n2;

   int n1Bits = countSetBit(n1);
   int n2Bits = countSetBit(n2);
   cout << (n1Bits + n2Bits) << endl;
}