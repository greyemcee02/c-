#include<iostream>
#include<algorithm>
using namespace std;

void ve(int *A, int n, int k){
    int a[n][n], dem=0, b=0;
    while(b<=n/2){
        for(int i=b;i<n-b;i++)
            if(dem<k)
            a[b][i]=A[dem++];
        for(int i=b+1;i<n-b-1;i++)
            if(dem<k)
            a[i][n-b-1]=A[dem++];
        for(int i=n-b-1;i>b;i--)
            if(dem<k)
            a[n-b-1][i]=A[dem++];
        for(int i=n-b-1;i>b;i--)    
            if(dem<k)
            a[i][b]=A[dem++];
        b++;
        if(dem==k) break;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout << a[i][j] << " ";
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    int *A = new int [n*n];
    for(int i=0;i<n*n;i++) cin >> A[i];
    sort(A,A+n*n);
    ve(A,n, n*n);
    return 0;
}