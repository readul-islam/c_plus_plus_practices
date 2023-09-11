#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define mod 1000000007

int *arr = (int *)calloc(100002, sizeof(int));

int fibonacciNumber(int n) {
  // base case
  if (n == 0 || n == 1) {
    arr[n] = n;
    return n;
  }
  if (arr[n] > 0)
    return arr[n];
  int ans = (1ll) * (fibonacciNumber(n - 1) + fibonacciNumber(n - 2)) % mod;
  arr[n] = ans;
  return ans;
}


int main(){
    int n;
    cin >> n;
    cout << fibonacciNumber(n) << endl;

}