#include <iostream>
#include <cmath>
using namespace std;

int sum(int n){
    int SUM=0;
    while(n>0){
        SUM+=n%10;
        n/=10;
    }
    return SUM;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        while(n>=10) n=sum(n);
        cout << n << endl;
    }
}

int main(){
    run();
    return 0;
}