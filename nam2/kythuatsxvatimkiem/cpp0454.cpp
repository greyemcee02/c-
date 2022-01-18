#include<iostream>

using namespace std;

void input(long long *a,int n){
    for(int i=0;i<n;i++){
        cin >> a[i];
        a[i]*=a[i];
    }
}

void swap(long long &a, long long &b){
    long long tmp=a;
    a=b;
    b=tmp;
}

void qsort(long long *a, int left, int right){
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
    if(r>left) qsort(a,left,r);
}

int binarysearch(long long *a,int l, int r, long long k){
    if(l<=r){
        int m=(l+r)/2;
        if(a[m]==k) return 1;
        if(a[m]<k) return binarysearch(a,m+1,r,k);
        return binarysearch(a,l,m-1,k);
    }
    return 0;
}

int kt(long long *a,int n){
    for(int i=1;i<n-1;i++){
        for(int j=0;j<i;j++){
            long long k = a[i]+a[j];
            if(binarysearch(a,i+1,n-1,k)) return 1;
        }
    }
    return 0;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        long long *a = new long long[n];
        input(a, n);
        qsort(a,0,n-1);
        if(kt(a,n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main(){
    run();
    return 0;
}