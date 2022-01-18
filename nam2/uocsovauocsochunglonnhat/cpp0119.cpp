#include<iostream>
#include<cmath>
using namespace std;

void kq(int n){
    int m=sqrt(n), dem=0;
    if(m*m==n && m%2==0) dem=-1;
    for(int i=1;i<=m;i++){
        if(n%i==0){
            if(i%2==0) dem++;
            if((n/i)%2==0) dem++;
        } 
    }
    cout << dem << endl;
}

void run(){
    int n,t;
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