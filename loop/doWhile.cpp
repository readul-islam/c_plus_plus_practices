#include <iostream>
using namespace std;

int main() {

   int i = 0;

   do {
      cout << "Print this text at lest one time" << endl;
      cout << i << " ";
      i++;
      cout << i;
   } while (i < 10);

   return 0;
}