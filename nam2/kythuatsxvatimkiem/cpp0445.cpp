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

int kt(int *a,int n, int  min){
    for(int i=1;i<n;i++) if(a[i]!=min) return i;
    return -1;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *a=new int [n+1];
        cin >> a[0];
        int min=a[0];
        for(int i=1;i<n;i++){
            cin >> a[i];
            if(min>a[i]) min =a[i];
        }
            
        qsort(a,0,n-1);
        int kq=kt(a,n, min);
        if(kq==-1) cout << -1;
        else cout << min << " " << a[kq];
        cout << endl;
    }
}

int main(){
    run();
    return 0;
}     