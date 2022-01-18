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

void run(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int *A = new int [100001];
        for(int i=0;i<n;i++){
            cin >> A[i];
        }
        qsort(A,0,n-1);
        cout << A[k-1] << endl;
        delete[] A;
    }
}

int main(){
    run();
    return 0;
}