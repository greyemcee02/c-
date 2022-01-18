#include<iostream>

using namespace std;
void input(int **a, int n, int m){
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++) cin >> a[i][j];
}

int tich(int **a1, int **a2,int a, int b,int m, int p){
    int tmp=0;
    for(int i=0;i<m;i++) tmp+=a1[a][i]*a2[i][b];
    return tmp;
}

void kq(int **a1, int **a2, int n, int m, int p){
    int kq[n][p]; 
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++)
        kq[i][j]=tich(a1,a2,i,j,m,p);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++) cout << kq[i][j] << " ";
        cout << endl;
    }
}

void run(){
    int  n, m, p;
    cin >> n >> m >>p;
    int **ar1 = new int * [n], **ar2 = new int *[m];
    for(int i=0;i<n;i++) ar1[i]=new int [m];
    for(int i=0;i<m;i++) ar2[i] = new int [p];
    input(ar1,n,m);
    input(ar2,m,p);
    kq(ar1,ar2,n,m,p);
    for(int i=0;i<n;i++) delete[] ar1[i];
    for(int i=0;i<m;i++) delete[] ar2[i];
    delete[] ar1;
    delete[] ar2;
}

int main(){
    run();
    return 0;
}