#include<bits/stdc++.h>

using namespace std;

struct SoDienThoai{
	string ngay, ten, hodem, sdt;
};

string ngay;

bool cmp(SoDienThoai s1, SoDienThoai s2){
	if(s1.ten < s2.ten) return true;
	else if(s1.ten == s2.ten){
		if(s1.hodem < s2.hodem) return true;
	}
	return false;
}

bool ktra(string s){
	string token;
	stringstream ss(s);
	ss >> token;
	if(token == "Ngay"){
		ss >> token;
		ngay = token;
		return true;
	} 
	else return false;
}

int main(){
	SoDienThoai ds[1001];
	int cnt = 0;
    ifstream ifs;
    ifs.open("SOTAY.txt");
    while(!ifs.eof()){
    	string s, token;
    	getline(ifs, s);
    	if(ktra(s)){
    		getline(ifs,s);
		}
		ds[cnt].ngay = ngay;
    	stringstream ss(s);
    	s = "";
    	while(ss >> token){
    		s += token + " ";
		}
    	ds[cnt].hodem = s;
    	ds[cnt].ten = token;
    	s = "";
    	getline(ifs, s);
    	ds[cnt].sdt = s;
    	cnt++;
	}
	ifs.close();
	sort(ds, ds + cnt - 1, cmp);
	ofstream ofs;
	ofs.open("DIENTHOAI.txt");
	for(int i = 0; i < cnt - 1; i++){
		ds[i].hodem.pop_back();
		ofs << ds[i].hodem << ": ";
		ofs << ds[i].sdt << " " << ds[i].ngay << endl;
	}
    return 0;
}
//Ngay 15/11/2021
//Nguyen Van E
//0914141581
//Nguyen Van B
//0921241515
//Ngay 16/11/2021
//Tran Van D
//0935141141
//Ngay 14/11/2021
//Tran Van B
//0935141141
