#include <iostream>
using namespace std;

int main() {

   // type arrayName [x][y]
   int arr[3][5] = {
       {1, 2, 3, 4, 5}, {15, 16, 17, 18, 19}, {25, 26, 27, 28, 29}};

   // accessing array
   cout << arr[0][5 - 1] << endl;

   int row = 3, column = 5;
   for (int i = 0; i < row; i++) {
      for (int j = 0; j < column; j++) {

        cout << arr[i][j] << endl;
      }
      cout << "";
   }
   return 0;
}