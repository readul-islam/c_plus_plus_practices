#include <iostream>
using namespace std;

int main(){
    int n, mask=0;
    cin >> n;
    int ans = n;
    if(n==0){
        return 0;
    }
    while(n!=0){
        mask = (mask << 1) | 1;
        n = n >> 1;
    };
    cout <<(~ans&mask)<<endl;
}