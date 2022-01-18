#include<iostream>
#include<cmath>
using namespace std;

int ktnt(int n){
    if(n==2) return 1;
    if(n<2||n%2==0) return 0;
    for(int i=3;i<=sqrt(n);i+=2) if(n%i==0) return 0;
    return 1;
}

int ktcs(int n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}

int ktu(int n){
    int s=0;
    while(n%2==0){
        s+=2;
        n/=2;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            s+=ktcs(i);
            n/=i;
        }
    }
    if(n>1) s+=ktcs(n);
    return s;
}

int kt(int n){
    if(ktnt(n)) return 0;
    if(ktcs(n)==ktu(n)) return 1;
    return 0;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        //cout << ktcs(n) << " " << ktu(n) << endl;
        if(kt(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main(){
    run();
    return 0;
}