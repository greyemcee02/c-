#include<iostream>

using namespace std;

void inputA(int **Arr, int n, int m){
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++) cin >> Arr[i][j];
}

void setprfx(int **Arr, int **prefixs, int n, int m){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            prefixs[i][j]=prefixs[i-1][j]+prefixs[i][j-1]
            -prefixs[i-1][j-1]+Arr[i-1][j-1];
        }
    }
}

void kq(int **Arr, int **prefixs, int n, int m, int L){
    for(int i=L;i<=n;i++){
        for(int j=L;j<=m;j++){
            int s=prefixs[i][j]-prefixs[i-L][j]-
            prefixs[i][j-L]+prefixs[i-L][j-L];
            cout << s/(L*L) << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, L;
        cin >> n >> m >> L;
        int **Arr = new int *[n];
        for(int i=0;i<n;i++) Arr[i] = new int [m];
        inputA(Arr,n,m);
        int **prefixs = new int *[n+1];
        for(int i=0;i<n+1;i++){
            prefixs[i] = new int [m+1];
            fill(prefixs[i],prefixs[i]+m+1,0);
        }
        setprfx(Arr,prefixs,n,m);
        
        kq(Arr,prefixs,n,m,L);
        for(int i=0;i<n;i++) delete[] Arr[i];
        delete[] Arr;
        for(int i=0;i<n+1;i++) delete[] prefixs[i];
        delete[] prefixs;
    }
    return 0;
}