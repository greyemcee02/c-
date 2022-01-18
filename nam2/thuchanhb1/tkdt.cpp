#include<bits/stdc++.h>

using namespace std;
int n, m, cnt = 0;
void solve(int A[200][200], int a, int b){
    for(int i = a-1; i <= a+1; i++){
        for(int j = b-1; j <= b+1; j++){
            if(A[i][j] >= 0){
                    cnt++;
                    A[i][j] = -2;
            }
        }
    }
}

int main(){
    cin >> n >> m;
    int A[200][200];
    for(int i = 0; i <= n + 1; i++){
        for(int j = 0; j <= m + 1; j++){
            if(i == 0 || i == n+1 || j == m+1 || j ==0) A[i][j] = -2;
            else
                cin >> A[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++)
            if(A[i][j] == -1) solve(A, i, j);
    }
    cout << cnt;
    return 0;
}