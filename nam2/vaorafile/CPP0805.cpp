#include<bits/stdc++.h>

using namespace std;

void chuanHoa(string &s){
	for(int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
}

int main(){
	fstream ifs;
	string str;
	set<string> hop, giao, dt2;
	ifs.open("DATA1.in", ios::in);
	while(!ifs.eof()){
		ifs >> str;
		chuanHoa(str);
		hop.insert(str);
	}
	ifs.close();

	ifs.open("DATA2.in", ios::in);
	while(!ifs.eof()){
		ifs >> str;
		chuanHoa(str);
		dt2.insert(str);
	}
	ifs.close();

	for(auto it : dt2){
		int bf = hop.size();
		//cout << it << endl;
		hop.insert(it);
		int at = hop.size();
		if(at == bf) 
			giao.insert(it);
	}

	for(auto it : hop)
		cout << it << " ";
	cout << endl;
	for(auto it : giao)
		cout << it << " ";
	cout << endl;
	return 0;
}
