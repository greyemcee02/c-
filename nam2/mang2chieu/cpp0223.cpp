#include<iostream>

using namespace std;

void input(int **a, int n, int m){
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++) cin >> a[i][j];
}

void output(int **a, int n, int m){
    int b=0, dem=0;
    while(b<=m/2){
        for(int i=b;i<m-b;i++){
            if(dem<n*m){
                cout << a[b][i] << " ";
                dem++; 
            } 
        }
        for(int i=b+1;i<n-b-1;i++){
            if(dem<m*n){
                cout << a[i][m-b-1] << " ";
                dem++;
            }   
        }
        for(int i=m-b-1;i>b;i--){
            if(dem<m*n){
                cout << a[n-b-1][i] << " ";
                dem++;
            } 
        } 
        for(int i=n-b-1;i>b;i--){
            if(dem<m*n){
                cout << a[i][b] << " ";
                dem++;
            }
        } 
        b++;
    }
    cout <<endl;
}

void run(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int **arr = new int * [n];
        for(int i=0;i<n;i++) arr[i]=new int [m];
        input(arr,n,m);
        output(arr,n,m);
    }
}

int main(){
    run();
    return 0;
}