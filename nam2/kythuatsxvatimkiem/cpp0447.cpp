#include <iostream>
#include <cmath>
using namespace std;

void swap(int &a, int &b){
    int tmp=a;
    a=b;
    b=tmp;
}

void qsort(int *a, int left, int right){
    int l=left, r=right, pivot=a[(r+l)/2];
    while(l<=r){
        while(a[l]<pivot) l++;
        while(a[r]>pivot) r--;
        if(l<=r){
            swap(a[l],a[r]);
            l++;r--;
        }
    }
    if(l<right) qsort(a,l,right);
    if(r>left) qsort(a,left,r);
}

void out(int *a, int n, int k){
    for(int i=n-1;i>=n-k;i--) cout << a[i] << " ";
    cout << endl;
}

void run(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int *a=new int [n+1];
        for(int i=0;i<n;i++)
            cin >> a[i];
        qsort(a,0,n-1);
        out(a,n,k);
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     