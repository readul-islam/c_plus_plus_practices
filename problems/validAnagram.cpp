#include <iostream>
using namespace std;

bool validAnagram(string text) {

   string revString = "";
   int len = text.length() - 1;

   for (int i = len; i >= 0; i--) {
      revString+=text[i];
      cout << revString << endl;
   }
}

int main() {
   string name = "test";

   validAnagram(name);
}