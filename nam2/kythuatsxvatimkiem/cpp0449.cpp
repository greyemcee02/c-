#include<iostream>

using namespace std;

int kt(int *a, int *dd, int n, int X){
    for(int i=0;i<n;i++){
        if(a[i]+X>100001) return -1;
        if(dd[a[i]+X]) return 1;
    }
    return -1;
}

void run(){
    int t, n, X;
    cin >> t;
    while(t--){
        cin >> n >> X;
        int *a = new int[n];
        int *dd = new int[n];
        fill(dd,dd+n,0);
        for(int i=0;i<n;i++){
            cin >> a[i];
            dd[a[i]]=1;
        }
        cout << kt(a,dd,n,X) << endl;
        delete[] dd;
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}