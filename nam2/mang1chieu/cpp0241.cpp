#include<iostream>

using namespace std;

void nhap(int A[], int n){
    for(int i=0;i<n;i++) cin >> A[i];
}

int kq(int A[], int n){
    int l=0, r=n-1, b=0;
    while(l<r){
        if(A[l]<A[r]){
            A[l+1]+=A[l];
            l++;
            b++;
        }
        else if(A[l]>A[r]){
            A[r-1]+=A[r];
            r--;
            b++;
        } 
        else{
            l++;
            r--;
        }
    }
    return b;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int A[n];
        nhap(A,n);
        cout << kq(A,n) << endl;
    }
    return 0;
}