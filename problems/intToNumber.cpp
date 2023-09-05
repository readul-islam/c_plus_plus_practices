// input 123 
// output 321

#include <iostream>
#include <math.h>

using namespace std;

int main() { 
    int n, digit, ans=0,i=0; 
    cin >> n;
    while(n!=0){
        digit = n % 10;
        ans = (digit * pow(10, i)+ ans);
        n = n / 10;
        i++;

    }
    cout << ans;


}
