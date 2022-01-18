#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int arr[n+1][m+1] = {}, sz = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> arr[i][j];
                if(arr[i][j]){
                    arr[i][j] += min(arr[i-1][j], min(arr[i-1][j-1], arr[i][j-1]));
                    sz = max(sz, arr[i][j]);
                }
            }
        }
        cout << sz << endl;
    }
    return 0;
}