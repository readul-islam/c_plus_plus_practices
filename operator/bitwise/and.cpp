#include <iostream>
using namespace std;

// And operator (&)
// workflows( a = 5, b = 7)
// convert to binary representation
// if 2 bits are 1 and 1 output is one 
// if 2 bits are 1 and 0 output is zero
// now calculate the bit 
// a = 101
// b = 111 
//---------------
//    101 = 5 


/* 
2.Another example when one integer will be negative number 
supposed int a = -5, int b = 7;
Q: what will be output?
1.convert decimal to binary representation
Note: you know that when you going to print a negative number we need to three steps-
1. convert to binary code - ...00000101
2.take 1's complement code =...11111010
3. take 2's complement code =        +1
-5 binary representation =  ...11111011
+7 binary representation =  ...00000111
(-5 & +7) binary rep     =  ...00000011
now convert to decimal rep = 3
*/

int main(){
    // and op(&)
    int a = -5; 
    int b = 7;
    int c = a&b;
    cout << c; // output 3;
   
}