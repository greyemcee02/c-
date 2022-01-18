#include<bits/stdc++.h>

using namespace std;
int **F;
void qhd(string str1, string str2){
    int m = str1.length(), n = str2.length();
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(str1[j-1] == str2[i-1]){
                F[i][j] = F[i-1][j-1] + 1;
            }
            else 
                F[i][j] = max(F[i-1][j], F[i][j-1]);
        }
    }
}

int main(){
    int t;
    cin >> t;
    string str1, str2;
    while(t--){
        cin >> str1 >> str2;
        int n = str2.length(), m = str1.length();
        F = new int *[n+1];
        for(int i = 0; i <= n; i++){
            F[i] = new int[m+1];
            fill(F[i], F[i] + m+1, 0);
        }
        qhd(str1, str2);
        int x = 0;
        while(F[n][x] < n && x <= m) x++;
        if(x == m+1) cout << -1 << endl;
        else{
            string kq;
            x--;
            while(str1[x]!=str2[0]){
                kq = str1[x] + kq;
                x--;
            }       
            kq = str1[x] + kq;
            cout << kq << endl;     
        }
    }
    return 0;
}