#include<iostream>
#include<math.h>

using namespace std;

int ktnt(int n){
    if(n==2) return 1;
    if(n<2||n%2==0) return 0;
    for(int i=3;i<=sqrt(n);i+=2)
    if(n%i==0) return 0;
    return 1;
}

int solve(int n, int k){
    int nt[100], m=1;
    if(ktnt(n)){
        if(k==1) return n;
        if(k>1) return -1;
    }
    if(n%2==0){
        while(n%2==0){
            nt[m++]=2;
            n/=2;
        }   
    }
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0 && ktnt(i)){
            while(n%i==0){
                nt[m++]=i;
                n/=i;
            }   
        }
    }
    if(n>1)
        nt[m++]=n;
    if(k>=m) return -1;
    return nt[k];
}

void run(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << solve(n,k) << endl;
    }
}

int main(){
    run();
    return 0;
}