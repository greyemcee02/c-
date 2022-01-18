#include<bits/stdc++.h>

using namespace std;

class DoanhNghiep{
	private:
		string id, name;
		int soluong;
	public:
		friend istream&operator >> (istream &in, DoanhNghiep &dn){
			in >> dn.id;
			in.ignore();
			getline(in, dn.name);
			in >> dn.soluong;
			return in;
		}
		friend ostream&operator << (ostream &os, DoanhNghiep &dn){
			os << dn.id << " " << dn.name << " " << dn.soluong << endl;
			return os;
		}
		
		int getsl(){
			return soluong;
		}
		string getid(){
			return id;
		}
};

bool cmp(DoanhNghiep dn1, DoanhNghiep dn2){
	if (dn1.getsl() > dn2.getsl()) return true;
	else if(dn1.getsl() == dn2.getsl()){
		if(dn1.getid() < dn2.getid()) return true;
	}
	return false;
}

int main(){
	int n;
	cin >> n;
	vector<DoanhNghiep> ds;
	DoanhNghiep d;
	for(int i = 0; i < n; i++){
		cin >> d;
		ds.push_back(d);
	}
	
	sort(ds.begin(), ds.end(), cmp);
	
	int q;
	cin >> q;
	while(q--){
		int a, b;
		cin >> a >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN "<< b << " SINH VIEN:" << endl;
		for(int i = 0; i < ds.size(); i++){
			if(ds[i].getsl() >= a&& ds[i].getsl() <=b)
				cout << ds[i] ;
		}
	}
	return 0;
}

//4
//VIETTEL
//TAP DOAN VIEN THONG QUAN DOI VIETTEL
//40
//FSOFT
//CONG TY TNHH PHAN MEM FPT - FPT SOFTWARE
//300
//VNPT
//TAP DOAN BUU CHINH VIEN THONG VIET NAM
//200
//SUN
//SUN*
//50
//1
//30 50
