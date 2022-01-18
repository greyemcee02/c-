#include<bits/stdc++.h>

using namespace std;
struct sinhVien{
	string hoten, masv, lop;
	float thcs2, cpp, tb;
};
int main(){
	int n;
	ifstream inp;
	inp.open("PTIT.in");
	inp >> n;
	sinhVien sv[n];
	for(int i = 0; i < n; i++){	
		inp.ignore();
		getline(inp,sv[i].masv);
		getline(inp,sv[i].lop);
		getline(inp,sv[i].hoten);
		inp >> sv[i].thcs2 >> sv[i].cpp;
	}
	inp.close();
	for(int i = 0; i < n; i++){
		cout << sv[i].masv << endl;
		cout << sv[i].lop << endl;
		cout << sv[i].hoten << endl;
		cout << sv[i].thcs2 << endl;
		cout << sv[i].cpp << endl;
	}
	return 0;
}
