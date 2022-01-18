#include<iostream>

using namespace std;

int kt(int **arr,int n, int len, int h, int c){
    for(int i=c;i<c+len;i++) if(arr[h][i]==0||arr[h+len-1][i]==0) return 0;
    for(int i=h;i<h+len;i++) if(arr[i][c]==0||arr[i][c+len-1]==0) return 0;
    return 1;
}

int kq(int **arr, int n){
    int len=n;
    while(len>0){
        for(int i=0;i+len<=n;i++){
            for(int j=0;j+len<=n;j++){
                if(kt(arr,n,len,i,j)) return len;
            }
        }
        len--;
    }
    return len;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cin.ignore();
        int **arr = new int *[n];
        char tmp;
        for(int i=0;i<n;i++){
            arr[i]=new int [n];
            for(int j=0;j<n;j++){
                cin >> tmp;
                if(tmp=='X') arr[i][j]=1;
                else arr[i][j]=0;
            }
        }
        cout << kq(arr, n) << endl;
        for(int i=0;i<n;i++) delete[] arr[i];
        delete[] arr;
    }
    return 0;
}