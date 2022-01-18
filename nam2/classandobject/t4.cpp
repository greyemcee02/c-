#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string ten, lop, email, masv;
	public:
		void nhap(){
			cin >> masv;
			cin.ignore();
			getline(cin, ten);
			cin >> lop >> email; 
		}
		
		void xuat(){
			cout << masv << " " << ten << " " << lop
			<< " " << email << endl;
		}
		string getmasv(){
			return masv;
		}
};

int main(){
	int n;
	vector<SinhVien> ds;
	SinhVien sv;
	cin >> n;
	for(int i =0; i < n; i++){
		sv.nhap();
		ds.push_back(sv);
	}	
	
	int q;
	cin >> q;
	string str;
	cin.ignore();
	while(q--){
		getline(cin, str);
		cout << "DANH SACH SINH VIEN NGANH ";
		for(int i = 0; i < str.length(); i++)
			cout << (char)toupper(str[i]);
		cout << ":" << endl;
		if(str == "Ke toan") str = "DCKT";
		else if(str == "Cong nghe thong tin") str = "DCCN";
		else if(str == "An toan thong tin") str = "DCAT";
		else if(str == "Vien thong") str = "DCVT";
		else str = "DCDT";
		for(int i = 0; i < ds.size(); i++){
			string s = ds[i].getmasv();
			if(s.find(str) != string :: npos){
				if(str == "DCCN" || str =="DCAT"){
					if(s[0] != 'E') ds[i].xuat();
				}
				else 
					ds[i].xuat();
			}
		}
		
	}
	return 0;
}

//4
//E16DCCN011
//Nguyen Trong Duc Anh
//D16CNPM1
//sv1@stu.ptit.edu.vn
//B15DCCN215
//To Ngoc Hieu
//D15CNPM3
//sv2@stu.ptit.edu.vn
//B15DCKT150
//Nguyen Ngoc Son
//D15CQKT02-B
//sv3@stu.ptit.edu.vn
//B15DCKT199
//Nguyen Trong Tung
//D15CQKT02-B
//sv4@stu.ptit.edu.vn
//1
//Ke toan
