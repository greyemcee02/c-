#include<bits/stdc++.h>

using namespace std;

void chuanhoa(string &str){
	for(int i = 0; i < str.length(); i++){
		str[i] = tolower(str[i]);
	}
}

void in(set<string> st){
	for(auto it : st)
		cout << it << " ";
	cout << endl;
}

int main(){
	set<string> hop, giao;
	ifstream ifs;
	string str;
	
	ifs.open("DATA1.in");
	while(!ifs.eof()){
		ifs >> str;
		if(isalpha(str[0])){
			chuanhoa(str);
			hop.insert(str);	
		}
	}
	ifs.close();
	
	ifs.open("DATA2.in");
	while(!ifs.eof()){
		ifs >> str;
		if(isalpha(str[0])){
			chuanhoa(str);
			int bf = hop.size();
			hop.insert(str);
			int at = hop.size();
			if(bf == at)
				giao.insert(str);	
		}
	}
	ifs.close();
	in(hop);
	in(giao);
	return 0;
}
