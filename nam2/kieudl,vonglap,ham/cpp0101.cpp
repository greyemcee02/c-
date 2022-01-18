#include <iostream>
#include <cmath>
using namespace std;


void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << (long long)(n+1)*n/2 <<endl;
    }
}

int main(){
    run();
    return 0;
}