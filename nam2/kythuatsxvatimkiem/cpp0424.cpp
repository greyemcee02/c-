#include <iostream>
#include <cmath>
using namespace std;

void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void qsort(int *a, int left, int right){
    int l=left, r=right;
    long long pivot = a[(l+r)/2];
    while(l<=r){
        while(a[l]<pivot) l++;
        while(a[r]>pivot) r--;
        if(l<=r){
            swap(a[l],a[r]);
            l++;r--;
        }
    }
    if(l<right) qsort(a,l,right);
    if(left<r) qsort(a,left,r);
}

void run(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> k >> n;
        int *a = new int[n*k];
        for(int i=0;i<n*k;i++)
            cin >> a[i];
        qsort(a,0,n*k-1);
        for(int i=0;i<n*k;i++) cout << a[i] << " ";
        cout << endl;
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     