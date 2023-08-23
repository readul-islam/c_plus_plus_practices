#include <iostream>
using namespace std;

// void autoStorageClass() {
//    // Declaring an auto variable
//    int a = 32;
//    float b = 3.2;

//    char d = 'G';

//    // printing the auto variables
//    cout << a << " \n";
//    cout << b << " \n";

//    cout << d << " \n";
// };

void staticStorageClass() {
   static int a = 5;
   a += 5;
   cout << a << endl;
   cout << &a << endl;
};

void nonStaticStorageClass() {
   int b = 5;
   b++;
   cout << b << endl;
}

void registerStorageClass() {
   register char b = 'b';
   cout << b << endl;
   cout << &b << endl;
}

int main() {
   registerStorageClass();
   // autoStorageClass();
   // staticStorageClass();
   // staticStorageClass();
   // nonStaticStorageClass();
   // nonStaticStorageClass();

   return 0;
}