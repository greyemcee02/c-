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

int up(int n){
    int a=n%10;
    n/=10;
    while(n>0){
        if(a<=n%10) return 0;
        a=n%10;
        n/=10;
    }
    return 1;
}

int down(int n){
    int a=n%10;
    n/=10;
    while(n>0){
        if(a>=n%10) return 0;
        a=n%10;
        n/=10;
    }
    return 1;
}

int kt(int n){
    int x=n, m=n%10;
    x/=10;
    if(m==x%10) return 0;
    if(m>x%10 && !up(x)) return 0;
    if(m<x%10 && !down(x)) return 0;
    return (ktnt(n));
}

void kq(int n){
    int l=1;
    for(int i=1;i<n;i++) l*=10;
    int r=l*10-1, dem=0;
    for(int i=l;i<=r;i++) if(kt(i)) dem++;
    cout << dem << endl;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        kq(n);
    }
}

int main(){
    run();
    return 0;
}