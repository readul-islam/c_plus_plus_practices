#include <string.h>
#include <iostream>
using namespace std;

int main() {

   int a, b;
  
   cin >> a;
   cin >> b;
  for(int i = a; i <= b; i++){
    if(1 <= i && i <= 9){
        std::string arr[] = {
            "one",
            "two",
            "three",
            "four",
            "five",
            "six",
            "seven",
            "eight",
            "nine",
        };
        printf("%s\n", arr[i-1].c_str());
    }
    else{
        if(b >= 10){
            if (i % 2 == 0) {
               cout << "even" << endl;
            } else {
               cout << "odd" << endl;
            }
        }
    }
}

   
}