#include<iostream>

using namespace std;

void output(int **a, int n, int m, int k){
    int dem=0, b=0;
    while(b<=m/2){
        for(int i=b;i<m-b;i++){
            dem++;
            if(dem==k){
                cout << a[b][i] << endl;
            }
        }
        for(int i=b+1;i<n-b;i++){
            dem++;
            if(dem==k){
                cout << a[i][m-b-1] << endl;
                break;
            }
        }
        for(int i=m-b-2;i>b;i--){
            dem++;
            if(dem==k){
                cout << a[n-b-1][i] << endl;
                break;
            }
        } 
            
        for(int i=n-b-1;i>b;i--){
            dem++;
            if(dem==k){
                cout << a[i][b] << endl;
                break;
            }
        }
        if(dem==k) break;
        b++;
    }

}

int main(){
    int t, n, m, k;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        int **a;
        a=new int *[n];
        for(int i=0;i<n;i++) a[i]=new int [m];
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) cin >> a[i][j];
        output(a,n,m,k);
        for(int i=0;i<n;i++) delete [] a[i];
        delete[] a;
    }
    return 0;
}