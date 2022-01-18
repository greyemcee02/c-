#include<iostream>
#include<cmath>
using namespace std;

int kt(int n){
    int m=0, x=1, a=n;
    while(n%2==0){
        if(x%2!=0){
            m++;
            x*=2;
        } 
        n/=2;
    }
    if(x*n!=a) return 0;
    for(int i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            if(x%i!=0){
                x*=i;
                m++;
                if(m>3) return 0;
            }
            n/=i;
        }
    }
    if(n>1){
        x*=n;
        m++;
    }
    if(m!=3||x!=a) return 0;
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