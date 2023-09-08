#include <iostream>
using namespace std;

// N size given a integer of arr where N is equal to ( 2m +1 )
// in the array m number twice and one number is present  only once;
// find the only once number or unique number
// input : {1,1,4,6,4,8,6}
// output : 8

int findUniqueNumber(int arr[], int len) {
   int ans = 0;
   for (int i = 0; i < len; i++) {
      ans = ans ^ arr[i];
   }
   cout << ans << endl;
   return ans;
}

int main() {

   int arr[7] = {1, 1, 4, 6, 4, 8, 6};
   int size = 7;
   int number = findUniqueNumber(arr, size);
   // cout << number << endl;

   return 0;
}