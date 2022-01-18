#include<iostream>

using namespace std;

void nhap(int **arr, int n, int m){
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++) 
        cin >> arr[i][j];
}
int c[8]={-1,0,1,-1,1,-1,0,1}, h[8] = {-1,-1,-1,0,0,1,1,1};

void timlancan(int **arr, int a, int b){
    for(int i=0;i<8;i++){
        if(arr[a+h[i]][b+c[i]]==1){
            arr[a+h[i]][b+c[i]]=-1;
            timlancan(arr,a+h[i],b+c[i]);
        } 
    }
}

int kq(int **arr, int n, int m){
    int dem=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i][j]==1){
                dem++;
                arr[i][j]=-1;
                timlancan(arr,i,j);
            }
        }
    }
    return dem;
}

int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int **arr = new int *[n+2];
        for(int i=0;i<n+2;i++){
            arr[i] = new int [m+2];
            fill(arr[i],arr[i]+m+2,0);
        }
        nhap(arr,n,m);
        cout << kq(arr,n,m) << endl;
        for(int i=0;i<n+2;i++) delete[] arr[i];
        delete[] arr;
    }
    return 0;
}