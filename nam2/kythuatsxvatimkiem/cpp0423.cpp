#include<iostream>

using namespace std;

int ketqua(int *A, int n, int k){
    int count = 0;
    for(int i=0;i<n;i++) if(A[i]<=k) count ++;
    int bad=0;
    for(int i=0;i<count;i++) if(A[i]>k) bad++;
    int ans=bad;
    for(int i=0, j=count;j<n;j++,i++){
        if(A[i]>k) bad--;
        if(A[j]>k) bad++;
        ans=(ans<bad)?ans:bad;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int *A = new int [n];
        for(int i=0;i<n;i++) cin >> A[i];
        cout << ketqua(A,n,k) << endl;
        delete[] A;
    }
    return 0;
}