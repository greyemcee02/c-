#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void nhap(int *A, int n){
    for(int i=0;i<n;i++) cin >> A[i];
}


long long kq(int *A, int n, int k){
    long long KQ=0;
    for(int i=0;i<n-1;i++){
        int l=i+1, r=n-1, mid, tmp=i;
        while(l<=r){
            mid=(l+r)/2;
            if(A[mid]-A[i]>=k) r=mid-1;
            else{
                tmp=mid;
                l=mid+1;
            }  
        }
        KQ+=tmp-i;
    }
    return KQ;
}

int main(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int *A = new int [n], tmp, len=0;
        nhap(A,n);
        sort(A,A+n);
        cout << kq(A,n,k) << endl;
        delete[] A;
    } 
    return 0;
}