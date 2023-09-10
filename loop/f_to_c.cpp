#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  // Write your code here
  int startF, endF, step, celsius;
  cin >> startF >> endF >> step;

  while (startF <= endF) {
    celsius = (startF - 32) * 5 / 9;
    cout << startF << "\t" << celsius << endl;
    startF += step;
  }
  return 0;
}