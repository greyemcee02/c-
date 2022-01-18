#include<iostream>

using namespace std;

void tichchap(int kq[100][100],int A[100][100], int B[10][10],int a, int b,int m){
    for(int i=a;i<a+m;i++){
        for(int j=b;j<b+m;j++) kq[i][j]=A[i][j]*B[i-a][j-b];
    }
}

void out(int kq[100][100], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout << kq[i][j] << " "; 
        cout << endl;
    }
}

void cuaso(int A[100][100], int B[10][10], int n, int m){
    int kq[100][100];
    for(int i=0;i<n;i+=m){
        for(int j=0;j<n;j+=m){
            tichchap(kq,A,B,i,j,m);
        }
    }
    out(kq,n);
}

int main(){
    int n, m;
    cin >> n;
    int A[100][100], B[10][10];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++) cin >> A[i][j];
    cin >> m;
    for(int i=0;i<m;i++)
    for(int j=0;j<m;j++) cin >> B[i][j];
    cuaso(A,B,n,m);
    return 0;
}