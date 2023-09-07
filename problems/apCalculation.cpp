#include <iostream>
using namespace std;

int apCalculation() {
   int n;
   cin >> n;
   int expression = (3 * n) + 7;
   return expression;
}

int main() {

   int result = apCalculation();
   cout << result << endl;
  
}