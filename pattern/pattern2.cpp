/*

Print this pattern

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

*/

#include <iostream>
using namespace std;

int main() {
   int n, row = 1;
   cout << "Enter number: ";
   cin >> n;

   while (row <= n) {
      int col = 1;
      while (col <= n) {
         cout << col <<" ";
         col++;
      };
      cout << endl;
      row++;
   };
}