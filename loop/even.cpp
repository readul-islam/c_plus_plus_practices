#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n, ans=0;
    cin >> n;
    for (int i =2; i<=n; i=i+2){
         ans += i;
    }

    cout << ans;
    return 0;
}