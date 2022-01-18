#include <iostream>
#include <cmath>
using namespace std;

int ktnt(int a){
    if(a==2) return 1;
    if(a<2||a%2==0) return 0;
    for(int i=3;i<=sqrt(a);i+=2)
    if(a%i==0) return 0;
    return 1;
}

void kq(long long L, long long R){
    int l=sqrt(L), r=sqrt(R), dem=0;
    if((long long)l*l<L) l++;
    for(int i=l;i<=r;i++) if(ktnt(i)) dem++;
    cout << dem << endl;
}

void run(){
    int t;
    long long l, r;
    cin >> t;
    while(t--){
        cin >> l >> r;
        kq(l,r);
    }
}

int main(){
    run();
    return 0;
}