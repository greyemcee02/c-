#include<iostream>

using namespace std;

void input(int *a, int n){
    for(int i=0;i<n;i++) cin >> a[i];
}

void solve(int *a,int n){
    cout << (long long)a[0] * a[1] << " ";
    for(int i=1;i<n-1;i++){
        cout << (long long)a[i-1]*a[i+1] <<  " ";
    }
    cout << (long long)a[n-2]*a[n-1] << endl;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *a = new int[n];
        input(a, n);
        solve(a,n);
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}