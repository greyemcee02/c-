#include <iostream>
#include <cmath>
using namespace std;

void qsort(int *A, int left, int right){
    int l=left, r=right, pivot = A[(l+r)/2];
    while(l<=r){
        while(A[l]<pivot) l++;
        while(A[r]>pivot) r--;
        if(l<=r){
            int tmp=A[l];
            A[l]=A[r];
            A[r]=tmp;
            l++;
            r--;
        } 
    }
    if(l<right) qsort(A,l,right);
    if(r>left) qsort(A,left,r);
} 

int MIN(int *a, int n){
    int min=a[n-1]-a[n-2];
    for(int i=n-2;i>0;i--) 
    if(a[i]-a[i-1]< min) min=a[i]-a[i-1];
    return min;
}

void run(){
    int t, n, q;
    cin >> t;
    while(t--){
        cin >> n;
        int *a=new int [n];
        for(int i=0;i<n;i++) cin >> a[i];
        qsort(a,0,n-1);
        cout << MIN(a,n) << endl;
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     