// input decimal number
// output binary number
// ex: 2 = 10

#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int n, rem, ans=0, i=0;
   cin >> n;
   while (n != 0) {
    rem = n % 2;
    cout << rem;
    ans = (rem * pow(10,i) + ans);
   //  cout << ans << endl;
    i++;
    n = n/2;
   }
}