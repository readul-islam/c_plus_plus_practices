#include <iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    int* ptr = new int[n];

   for(int i = 0; i < n; i++){
    ptr[i] = i*2;
   }

   for(int i = 0 ; i < n; i++){
    cout << ptr[i] << endl;
   }
    cout << ptr[0] << endl;
    delete [] ptr;
    cout << ptr[0] << endl;
    return 0;
}