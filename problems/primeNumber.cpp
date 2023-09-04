#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Enter your Number: ";
   cin >> n;
   for (int i = 2; i < n; i++) {
      if (n % i == 0) {
         cout << n << " isn't Prime Number" << endl;
        return 0;
      }
   }

   cout << n << " is Prime Number";
}