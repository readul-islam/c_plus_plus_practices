#include <iostream>
using namespace std;

bool isVowel(char ch) {
   if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' ||
       ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {

      return 1;
   }

   return 0;
}

bool isVowel1(char ch) {

   string vowel = "aeiouAEIOU";
 return (vowel.find(ch) != string::npos);
  

   return 0;
}

int main() {

   char character;
   cin >> character;

   if (isVowel(character)) {
      cout << character << " is Vowel" << endl;
   } else {
      cout << character << " is  Constant" << endl;
   }
   if ( isVowel1(character)) {
      cout << character << " is Vowel" << endl;
   } else {
      cout << character << " is  Constant" << endl;
   }
  
   return 0;
}