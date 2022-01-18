#include<iostream>

using namespace std;

int kq(int *A, int n,long long X){
    int len=n+1;
    int end=0, start=0;
    long long s=0;
    while(end<n){
        while(s<=X&&end<n){
            s+=A[end++];
        }
        while(s>X&&start<n){
            len=(len<end-start)?len:(end-start);
            s-=A[start++];
        }
    }
    if(len==n+1) return -1;
    return len;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,dd=0;
        long long X;
        cin >> n >> X;
        int *A=new int [n];
        for(int i=0;i<n;i++){
            cin >> A[i];
            if(A[i]>X) dd=1;
        } 
        if(dd==1) cout << 1 << endl;
        else
        cout << kq(A,n,X) << endl;
        delete[] A;
    }

    return 0;
}