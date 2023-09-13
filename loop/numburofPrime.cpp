#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int totalPrime(int s, int e) {

   int prime = 0;

   for (int i = s; i <= e; i++) {
      int count = 0;
      for (int j = 2; j <= sqrt(i); j++) {
         if (i % j == 0) count++;
      }
      if (count == 0) prime++;
   }
   return prime;

}

int main() {

   int S, E;
   cin >> S >> E;
   cout << totalPrime(S, E);

   return 0;
}