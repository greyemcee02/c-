#include<iostream>

using namespace std;

void output(int **a, int n, int m){
    int *kq = new int[n*m], k=n*m-1, b=0;
    while(b<=m/2){
        for(int i=b;i<m-b;i++) if(k>=0)
            kq[k--]=a[b][i];
        for(int i=b+1;i<n-b;i++) if(k>=0)
            kq[k--]=a[i][m-b-1];
        for(int i=m-b-2;i>b;i--) if(k>=0)
            kq[k--]=a[n-b-1][i];
        for(int i=n-b-1;i>b;i--) if(k>=0)
            kq[k--]=a[i][b];
        b++;
    }
    for(int i=0;i<n*m;i++) cout << kq[i] << " ";
    cout << endl;
}

int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int **a;
        a=new int *[n];
        for(int i=0;i<n;i++) a[i]=new int [m];
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) cin >> a[i][j];
        output(a,n,m);
        for(int i=0;i<n;i++) delete [] a[i];
        delete[] a;
    }
    return 0;
}