#include <iostream>
#include <cmath>
using namespace std;

void doi(int a[100][100], int x, int y, int n, int m){
    for(int i=0;i<m;i++) a[x][i]=1;
    for(int i=0;i<n;i++) a[i][y]=1;
}

void kq(int n, int m){
    int arr[100][100]={}, tmp;
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin >> tmp;
           if(tmp==1) doi(arr,i,j,n,m);
       }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}

void run(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >>m;
        kq(n,m);
    }
}

int main(){
    run();
    return 0;
}     