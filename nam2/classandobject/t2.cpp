#include<bits/stdc++.h>

using namespace std;

class GiangVien{
	private:
		string name, bomon, namethuong;
		int id;
		static int cnt;
	public:
		void nhap(){
			getline(cin, name);
			namethuong = "";
			for(int i = 0; i < name.length(); i++){
				namethuong += tolower(name[i]);
			}
			getline(cin, bomon);
			stringstream ss(bomon);
			string token;
			bomon = "";
			while(ss >> token){
				bomon+= toupper(token[0]);
			}
			cnt++;
			id = cnt;
		}
		void xuat(){
			cout << "GV" << setw(2) << setfill('0') << id;
			cout << " " << name << " " << bomon << endl;
		}
		string getten(){
			return namethuong;
		}
};


int GiangVien :: cnt = 0;
int main(){
	int n;
	vector<GiangVien> ds;
	cin >> n;
	cin.ignore();
	GiangVien gv;
	for(int i = 0; i < n; i++){
		gv.nhap();
		ds.push_back(gv);
	}
	
	int q;
	cin >> q;
	cin.ignore();
	while(q--){
		string str;
		getline(cin, str);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << str << ":" << endl;
		for(int i = 0; i < str.length(); i++){
			str[i] = tolower(str[i]);
		}
		
		for(auto it : ds){
			string st = it.getten();
			if(st.find(str)!= string :: npos){
				it.xuat();
			}
		}
	}
	return 0;
}

//3
//Nguyen Manh Son
//Cong nghe phan mem
//Vu Hoai Nam
//Khoa hoc may tinh
//Dang Minh Tuan
//An toan thong tin
//1
//aN
