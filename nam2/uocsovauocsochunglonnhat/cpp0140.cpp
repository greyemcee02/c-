#include<iostream>
#include<cmath>
using namespace std;

int ktnt(int a){
    if(a==2) return 1;
    if(a<2||a%2==0) return 0;
    for(int i=3;i<=sqrt(a);i+=2) 
    if(a%i==0) return 0;
    return 1;
}

int kt(long long n){
    int m1=0, m2=0;
    if(n%2!=0) return 0;
    while(n%2==0){
        m1++;
        n/=2;
    }
    if(ktnt(n)==0) return 0;
    n++;
    while(n%2==0){
        m2++;
        n/=2;
    }
    if(n>1) return 0;
    if(m1==m2-1) return 1;
    return 0;
}

void run(){
    int t;
    long long n;
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