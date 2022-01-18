#include<bits/stdc++.h>

using namespace std;

long long cd(string s){
	long long kq = 0;
	for(int i = 0; i < s.length(); i++)
		kq = kq*10 + (s[i] - '0');
	return kq;
}

int main(){
	ifstream ifs;
	ifs.open("DATA.in");
	string tmp;
	long long sum = 0;
	while(!ifs.eof()){
		ifs >> tmp;
		if(tmp.length() > 10 || isalpha(tmp[0])){
			tmp ="";
		}
		else{
			long long s = cd(tmp);
			if(s - INT_MAX <= 0 && !ifs.eof()){
				sum += s;
			}
		}
	}
	cout << sum << endl;
	ifs.close();
	return 0;	
}
