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

int binarysearch(int *a,int l, int r, int X){
    if(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==X) return mid;
        if(a[mid] < X) return binarysearch(a,mid+1,r,X);
        if(a[mid]>X) return binarysearch(a,l,mid-1,X);
    }
    return -1;
}

void kq(int *a,int n, int X){
    qsort(a,0,n-1);
    int t=binarysearch(a,0,n-1,X);
    if(t==-1) cout << -1 << endl;
    else{
        int r=t, l=t;
        while(a[r+1]==a[t]) r++;
        while(a[l-1]==a[t]) l--;
        cout << r-l+1<<endl;
    }
}

void run(){
    int t, n, X;
    cin >> t;
    while(t--){
        cin >> n >> X;
        int *a=new int [n+1];
        for(int i=0;i<n;i++)
            cin >> a[i];
        kq(a,n,X);
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     