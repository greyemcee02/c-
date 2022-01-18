#include<iostream>
#include<cmath>
using namespace std;

int ktnt(int n){
    if(n==2) return 1;
    if(n<2||n%2==0) return 0;
    for(int i=3;i<=sqrt(n);i+=2) 
        if(n%i==0) return 0;
    return 1;
}

int solve(int n){
    for(int i=2;i<=n/2;i++)
        if(ktnt(i)&&ktnt(n-i)) return i;
    return -1;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int tmp=solve(n);
        if(tmp==-1) cout << -1 << endl;
        else cout << tmp << " " << n-tmp << endl;
    }
}

int main(){
    run();
    return 0;
}