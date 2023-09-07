#include <iostream>
using namespace std;

int main() {
   int a, b;
   char op;
   cout << "Enter your Number of a: ";
   cin >> a;
   cout << "Enter your Number of b: ";
   cin >> b;
   cout << "Enter your operation operator: ";
   cin >> op;

   switch (op) {
      case '+':
         cout << "Addition of " << a << " + " << b << " = " << (a + b) << endl;
         break;
      case '-':
         cout << "Subtraction of " << a << " - " << b << " = " << (a - b) << endl;
         break;
      case '*':
         cout << "Multiplication of " << a << " * " << b << "= " << (a * b)
              << endl;
         break;
      case '/':
         cout << "Division of " << a << " / " << b << "= " << (a / b) << endl;
         break;
      case '%':
         cout << "Modulus of " << a << " % " << b << "= " << (a / b) << endl;
         break;

      default:
         cout << "Enter a valid operation";
   }
}