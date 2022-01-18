#include<bits/stdc++.h>

using namespace std;

vector<int> hang = {1, 0, -1, 0}, cot = {0, 1, 0, -1};
bool ok;
int res;
void Try(int h, int c, int h2, int c2, int cnt, vector<vector<int>> &A){
	for(int j = 0; j < 4; j++){
		if(A[h+hang[j]][c+cot[j]] == 1){
			A[h+hang[j]][c+cot[j]] = -1;
			if(h+hang[j] == h2 && c+cot[j] == c2){
				res = min(res, cnt);
				ok = true;
			} 
			else
				Try(h+hang[j], c+cot[j], h2, c2, cnt+1, A);
			
		}
	}
}

int main(){
	int t, n, m, h1, c1, h2, c2;
	cin >> t;
	while(t--){
		cin >> n >> m >> h1 >> c1 >> h2 >> c2;
		h1++; c1++; h2++; c2++;
		vector<vector<int>> A(n+2, vector<int>(m+2, -1));
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++)
				cin >> A[i][j];
		}
		res = INT_MAX;
		ok = false;
		Try(h1, c1, h2, c2, 1, A);
		if(ok) cout << res << endl;
		else cout << -1 << endl;
	}
	return 0;
}
