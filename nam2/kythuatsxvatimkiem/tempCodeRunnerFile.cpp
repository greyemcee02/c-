#include<iostream>

using namespace std;

void input(int *a,int n){
    for(int i=0;i<n;i++)
        cin >> a[i];
}

void swap(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;
}

void qsort(int *a, int left, int right){
    int l=left, r=right;
    int pivot = a[(l+r)/2];
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
        int m=(l+r)/2;
        if(a[m]==X) return 1;
        if(a[m]<X) return binarysearch(a,m+1,r,X);
        return binarysearch(a,l,m-1,X);
    }
    return 0;
}

int kt(int *a,int n, int X){
    for(int i=0;i<n;i++){
        if(X+a[i]>a[n-1]) return -1;
        if(a[i]==a[i-1]) continue;
        if(binarysearch(a,i+1,n-1,a[i]+X)) return 1;
    }
    return -1;
}

void run(){
    int t, n, X;
    cin >> t;
    while(t--){
        cin >> n >> X;
        int *a = new int[n];
        input(a, n);
        qsort(a,0,n-1);
        cout << kt(a,n,X) << endl;
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}