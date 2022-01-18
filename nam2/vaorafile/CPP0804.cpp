#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream ifs;
	ifs.open("VANBAN.in");
	set<string> st;
	string str;
	while(!ifs.eof()){
		ifs >> str;
		for(int i = 0; i < str.length(); i++)
			str[i] = tolower(str[i]);
		st.insert(str);
	}
	for(auto it : st){
		cout << it << endl;
	}
	ifs.close();
	return 0;
}
