#include<iostream>
#include<cmath>
using namespace std;

void inlen(int **A, int i1, int i2, int j1, int j2){
    while(i2>=i1&&j2<=j1){
        cout << A[i2][j2] << " ";
        i2--;
        j2++;
    }
}

void inxuong(int **A, int i1, int i2, int j1, int j2){
    while(i1<=i2&&j1>=j2){
        cout << A[i1][j1] << " ";
        i1++;
        j1--;
    }
}

void ve(int **A, int n, int m){
    int i1=0, i2=0, j1=0, j2=0;
    cout << A[0][0] << " ";
    while(j1+j2 < 2*m){
        if(j1<m-1) j1++; 
        else i1++;
        if(i2<n-1) i2++;
        else  j2++;
        if((i1+j1)%2==0) inlen(A,i1,i2,j1,j2);
        else inxuong(A,i1,i2,j1,j2);
    }
    cout <<  endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
         int **A = new int *[n];
        for(int i=0;i<n;i++){
           A[i]=new int [m];
           for(int j=0;j<m;j++) cin >> A[i][j];
        }
        ve(A,n,m);
        for(int i=0;i<n;i++) delete[] A[i];
        delete[] A;
    }
    return 0;
}