#include <iostream>
#include <cmath>
using namespace std;


int sum(int *a, int l, int r){
    int s=0;
    for(int i=l;i<=r;i++) s+=a[i];
    return s;
}

void run(){
    int t, n, q;
    cin >> t;
    while(t--){
        cin >> n >> q;
        int *a=new int [n];
        for(int i=0;i<n;i++) cin >> a[i];
        int l, r;
        while(q--){
            cin >> l >> r;
            cout << sum(a,l-1,r-1) <<  endl;
        }
        
    }
}

int main(){
    run();
    return 0;
}     