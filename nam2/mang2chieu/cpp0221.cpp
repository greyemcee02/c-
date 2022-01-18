#include<iostream>

using namespace std;

void xoay(int a[100][100], int n, int m, int b){
    int tmp1=a[b][b], tmp2;
    for(int i=b+1;i<m-b;i++){
        tmp2=a[b][i];
        a[b][i]=tmp1;
        tmp1=tmp2;
    }
    for(int i=b+1;i<n-b;i++){
        tmp2=a[i][m-1-b];
        a[i][m-1-b]=tmp1;
        tmp1=tmp2;
    }
    for(int i=m-2-b;i>=b;i--){
        tmp2=a[n-1-b][i];
        a[n-1-b][i]=tmp1;
        tmp1=tmp2;
    }
    for(int i=n-2-b;i>=b;i--){
        tmp2=a[i][b];
        a[i][b]=tmp1;
        tmp1=tmp2;
    }
}

void output(int a[100][100], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cout << a[i][j] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, a[100][100];
        cin >> n >> m;
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) cin >> a[i][j];
        int b=(n<m)?n/2:m/2;
        for(int i=0;i<b;i++)
        xoay(a,n,m,i);
        output(a,n,m);
    }
    return 0;
}