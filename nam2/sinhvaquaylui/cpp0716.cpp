#include<bits/stdc++.h>

using namespace std;
int n, **Arr, k, d;

void Try(int h, int c, int sum){
	if( h<n && c<n ){
		sum += Arr[h][c];
		if(h==n-1&&c==n-1){
			if(sum==k) d++;
		} 
		else{
			if(h==n-1) Try(h,c+1,sum);
			else if(c==n-1) Try(h+1,c,sum);
			else {
				Try(h+1,c,sum); Try(h,c+1,sum);
			}
		}
		sum -= Arr[h][c];
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k; d = 0;
		Arr = new int *[n];
		for(int i=0;i<n;i++){
			Arr[i] = new int [n];
			for(int j = 0; j < n; j++) cin >> Arr[i][j];
		}
		Try(0,0,0);
		cout << d << endl;	
	}
	return 0;
}
