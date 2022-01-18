#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	ifstream inp;
	ofstream outp;
	inp.open("PTIT.in");
	outp.open("PTIT.out");
	while(!inp.eof()){
		getline(inp,str);
		outp << str;
		if(!inp.eof()) outp << endl;
	}	
	inp.close();
	outp.close();
	return 0;
}
