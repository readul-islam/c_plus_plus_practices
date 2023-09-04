// fibonacci series:0,1,1,2,3,5,8,13

#include <iostream>
using namespace std;

int main() {

   int n, n1 = 0, n2 = 1, nth = 0;

   cout << "Enter your Number for print Fibonacci Series: ";
   cin >> n;
   // n1 + n2 = n3
   // n2 + n3 = n4
   // n3 + n4 = n5
   // simple way 1

   
   cout << n1 << " " << n2 << " ";
   for (int i = 3; i <= n; i++) {
      nth = n1 + n2;
      n1 = n2;
      n2 = nth;
      cout << nth << " ";
   }
}