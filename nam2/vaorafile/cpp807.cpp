#include<bits/stdc++.h>
#include<set>

using namespace std;

int main(){
	ifstream ifs;
	ifs.open("DATA.in");
	int n, m, tmp;
	ifs >> n >> m;
	set<int> st1, st2;
	for(int i = 0; i < n; i++){
		ifs >> tmp;
		st1.insert(tmp);
	}
	for(int i = 0; i < m; i++){
		ifs >> tmp;
		if(st1.count(tmp)){
			st2.insert(tmp);
		}
	}
	ifs.close();
	for(auto it : st2)
		cout << it << " ";
	return 0;
}
