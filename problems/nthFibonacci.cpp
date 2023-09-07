#include <iostream>
using namespace std;

int main() {
    
   int nth, temp, a = 0, b = 1;
   cout << "Enter the number of  nth: ";
   cin >> nth;

   if (nth < 3) {
      cout << "valid from 3th fibonacci" << endl;
      return 0;
   }

   for (int i = 3; i <= nth; i++) {
      temp = a + b;
      a = b;
      b = temp;
   }

   cout << temp << endl;
}