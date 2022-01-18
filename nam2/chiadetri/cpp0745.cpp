#include<iostream>
#include<string>
using namespace std;

int main(){
    long long fibo[1001], E=1000000007;
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<=1000;i++) fibo[i]=((fibo[i-1])%E+(fibo[i-2])%E)%E;
    int t, n;
    cin>> t;
    while(t--){
        cin >> n;
        cout << fibo[n] << endl;
    }
    return 0;
}