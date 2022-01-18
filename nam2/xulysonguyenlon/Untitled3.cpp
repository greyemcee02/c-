#include<bits/stdc++.h>

using namespace std;
int solve(string s, int k){
	int cnt = 0;
	for(int i = 0; i < str.length(); i++){
		int sum = 0;
		for(int j = i; j < str.length(); i++){
			sum = sum*10 + (s[j] - '0');
			sum%=k;
			if(sum == 0) cnt++;
		}
	}
	return cnt;
}
int main(){
	int t;
	cin >> t;
	string str;
	while(t--){
		cin >> str;
		cout << solve(str, 3) - solve(str, 24) << endl; 
	}
	return 0;
}

