#include <iostream>
using namespace std;


int main(){

    int size;
    int arr[100];
    cin >> size;
    for(int i=0 ; i<size ; i++){
        cin >> arr[i];
    }
    for(int i=0 ; i<size ; i++){
       cout << arr[i] << endl;
    }

    cout << (sizeof(arr)/sizeof(int)) << endl;

    return 0;
}