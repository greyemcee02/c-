#include <iostream>
#include <cmath>
using namespace std;

void input(int *a, int n){
    for(int i=0; i<n;i++) cin >> a[i];
}

void swap(int &a, int &b){
    int tmp=a;
    a=b;
    b=tmp;
}

void qsort(int *a,int left, int right){
    int l=left, r=right, pivot=a[(l+r)/2];
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

int binarysearch(int *a, int l, int r, int X){
    int mid=(r+l)/2;
    if(l>r) return -1;
    if(a[mid]==X) return 1;
    if(a[mid]>X) return binarysearch(a,l,mid-1,X);
    if(a[mid]<X) return binarysearch(a,mid+1,r,X);
    return -1;
}

void run(){
    int t, n, X;
    cin >> t;
    while(t--){
        cin >> n >> X;
        int *a = new int [n+1];
        input(a,n);
        qsort(a,0,n-1);
        cout << binarysearch(a,0,n-1,X) << endl;
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     