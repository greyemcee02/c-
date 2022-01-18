#include <iostream>
#include <cmath>
using namespace std;

int kt(int n){
    if(n%100!=86) return 0;
    return 1;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << kt(n) << endl;
    }
}

int main(){
    run();
    return 0;
}