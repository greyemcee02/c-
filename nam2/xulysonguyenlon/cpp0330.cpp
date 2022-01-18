#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> p1, pair<int,int> p2){
	if(p1.second<p2.second) return true;
	else if(p1.second == p2.second){
		if(p1.first < p2.first) return true;
	}
	return false;
}

string solve(string str){
	int A[10] = {0}, sole, lemax = -1;
	for(int i = 0; i < str.length(); i++){
		A[str[i] - '0']++;
	}
	vector<pair<int,int>> chan, le;
	for(int i = 9; i > 0; i--){
		if(A[i]%2==0 && A[i]>0) chan.push_back({i,A[i]});
		else if(A[i]%2!=0){
			le.push_back({i,A[i]});
		}
	}
	string str1 = "", str2="";
	for(int i = 0; i < chan.size(); i++){
		for(int j = 1; j <= chan[i].second/2; j++){
			str1+=(char)(chan[i].first + '0');
			str2 = (char)(chan[i].first + '0') + str2;
		}
	}
	string xaule;
	string xaukhong;	
	if(le.size() != 0){
		sort(le.begin(), le.end(), cmp);
		for(int i = 0; i < le[le.size()-1].second; i++)
			xaule += (char)(le[le.size()-1].first + '0');
	} 
	
	if(str1.empty()){
		if(xaule.empty())
			for(int i = 0; i < A[0]; i++)
					str1+='0';
		else
			str1 = xaule;
	}
	else{
		if(A[0]%2!=0){
			if(A[0] > xaule.length()){
				for(int i = 0; i < A[0]; i++)
					str1+='0';
				str1+=str2;
			}
			else
				str1 = str + xaule + str2;
		}
		else{
			for(int i = 0; i < A[0]/2; i++){
				str1+='0';
				str2 = '0' + str2;
			}
			str1 = str1+xaule+str2;
		}
	}
	return str1;
}

int main(){
	int t;
	cin >> t;
	string str;
	while(t--){
		cin >> str;
		cout << solve(str) << endl;
	}
	return 0;
}
