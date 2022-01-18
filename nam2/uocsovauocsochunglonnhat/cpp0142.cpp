#include<iostream>
#include<cmath>
using namespace std;

int ucln(int n, int m){
    while(m>0){
        int tmp=m;
        m=n%m;
        n=tmp;
    }
    return n;
}


int ktnt(int n){
    if(n==2) return 1;
    if(n%2==0||n<2) return 0;
    for(int i=3;i<=sqrt(n);i+=2) 
    if(n%i==0) return 0;
    return 1;
}

int kq(int n){
    int dem=0;
    if(n==3) return 1;
    if(ktnt(n)) return 0;
    for(int i=1;i<n;i++) if(ucln(i,n)==1) dem++;
    return ktnt(dem);
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << kq(n) << endl;
    }
}

int main(){
    run();
    return 0;
}