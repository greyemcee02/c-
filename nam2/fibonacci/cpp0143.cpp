#include <iostream>
#include <cmath>
using namespace std;

void fibo(long long *a){
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=92;i++) a[i]=a[i-1]+a[i-2];
}

void run(){
    int t, n;
    cin >> t;
    long long *arr = new long long [100];
    fibo(arr);
    while(t--){
        cin >> n;
        cout << arr[n] << endl;
    }
    delete[] arr;
}

int main(){
    run();
    return 0;
}