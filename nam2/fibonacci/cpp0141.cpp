#include <iostream>
#include <cmath>
using namespace std;

void fibo(long long *a){
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=92;i++) a[i]=a[i-1]+a[i-2];
}

void run(){
    int t;
    cin >> t;
    long long *arr = new long long [100], n;
    fibo(arr);
    while(t--){
        cin >> n;
        int dd=0;
        for(int i=0;i<=92;i++){
            if(arr[i]==n){
                dd=1;
                break;
            }
            else if(n>arr[i] && n < arr[i+1])
                break;
        }
        if(dd==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    delete[] arr;
}

int main(){
    run();
    return 0;
}