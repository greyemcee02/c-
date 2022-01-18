#include<iostream>

using namespace std;

int tichchap(int **A, int kernel[3][3], int a, int b){
    int s=0;
    for(int i=a;i<a+3;i++){
        for(int j=b;j<b+3;j++)
        s+=A[i][j]*kernel[i-a][j-b];
    }
    return s;
}

void KQ(int **A,int kernel[3][3], int n, int m){
    
    long long kq=0;
    for(int i=0;i<n-3+1;i++){
        for(int j=0;j<m-3+1;j++){
           kq+=tichchap(A,kernel,i,j);
        }
    }
    cout << kq << endl;
}

int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int **A = new int *[n];
        for(int i=0;i<n;i++) A[i]=new int[m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++) cin >> A[i][j];
            int kernel[3][3]={-1};
        for(int i=0;i<3;i++)
        for(int j=0;j<3;j++) cin >> kernel[i][j];
        KQ(A,kernel,n,m);
        //cout << endl;
    }
    return 0;
}