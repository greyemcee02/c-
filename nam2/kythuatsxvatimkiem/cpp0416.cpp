#include <iostream>
#include <cmath>
using namespace std;


void run(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int *a = new int[1001], tmp, d=0;
        for(int i=0;i<1001;i++) a[i]=0;
        for(int i=0;i<n;i++){
            cin >> tmp;
            a[tmp]++;
        }
        for(int i=0;i<=k/2;i++){
            if(a[i]!=0 && a[k-i] !=0){
                if(i==k-i) d+=a[i]*(a[i]-1)/2;
                else d+=a[i]*a[k-i];
            }
        }
        cout << d <<endl;
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     