#include<iostream>

using namespace std;

void nhap(long long *a, int n){
    for(int i=0;i<n;i++) cin >> a[i];
}

long long ucln(long long a,long long b){
    while(b>0){
        long long tm=b;
        b=a%b;
        a=tm;
    }
    return a;
}

long long kq(long long hx, long long gx,long long P){
    long long ret =1;
    while(gx>0){
        if(gx%2!=0) ret=ret*hx%P;
        hx=hx*hx%P;
        gx/=2;
    }
    return ret;
}

void solve(long long *a, int n, long long P){
    long long hx, gx;
    if(n==1){
        hx=a[0];
        gx=a[0];
    } 
    else{
        hx=((long long) a[0]*a[1])%P; gx=ucln(a[0],a[1]);
        for(int i=2;i<n;i++){
            hx=(hx*a[i])%P;
            gx=ucln(gx,a[i]);
        }
    }
    cout << kq(hx,gx,P) << endl;
}

int main(){
    int t, n;
    long long p=1000000007;
    cin >> t;
    while(t--){
        cin >> n;
        long long *a=new long long [n];
        nhap(a,n);
        solve(a,n,p);
        delete[] a;
    }
    return 0;
}