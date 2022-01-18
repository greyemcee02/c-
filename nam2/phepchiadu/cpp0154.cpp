#include <iostream>
#include <cmath>
using namespace std;

long long sum(long long N){
    return N*(N+1)/2;
}

int kt(long long N, long long K){
    return(K==(N/K)*sum(K-1)+sum(N%K)); 
}

void run(){
    int t;
    long long  K, N;
    cin >> t;
    while(t--){
        cin >> N >> K;
        cout << kt(N,K) << endl;
    }
}

int main(){
    run();
    return 0;
}