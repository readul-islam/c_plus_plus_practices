#include <iostream>
using namespace std;


void selection_sort(int arr[], int size){

    for(int i =0; i< size-1; i++){
        
        int minIndex = i;
      for(int j=i+1; j < size-1 ; j++){
            if(arr[minIndex] < arr[j]){
                minIndex = j;
                cout<< arr[minIndex] << " " << minIndex<< endl;
            }
      }
    }

}

int main(){

    int arr[6] = {6,5,2,7,1,3};
    int size = 6;
    selection_sort(arr, size);
    return 0;
}