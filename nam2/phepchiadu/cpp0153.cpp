#include <iostream>
#include <cmath>
using namespace std;

long long sum(long long N){
    return N*(N+1)/2;
}

void run(){
    int t;
    long long  K, N;
    cin >> t;
    while(t--){
        cin >> N >> K;
        cout << (N/K)*sum(K-1)+sum(N%K) << endl;
    }
}

int main(){
    run();
    return 0;
}