#include<bits/stdc++.h>

using namespace std;
struct monHoc{
	string tenMh;
	int sotc, maMH;
	float diemKT, diemThi, diemCC;
	float diemTB;
};

struct sinhVien{
	string maSV, hoTen, lop;
	int somon, vt;
	float diemtbsv;
	monHoc mh[500];
};

void nhapmh(monHoc mh[], int n){
	for(int i = 0; i < n; i++){
		cin >> mh[i].maMH; 
		cin.ignore();
		getline(cin,mh[i].tenMh);
		cin >> mh[i].sotc;
	}
}

void nhapsv(sinhVien sv[], monHoc mon[], int m){
	for(int i = 0; i < m; i++){
		cin >> sv[i].vt;
		cin.ignore();
		getline(cin,sv[i].hoTen);
		cin >> sv[i].maSV;
		cin >> sv[i].somon;
		for(int j = 0; j < sv[i].somon; j++){
			cin >> sv[i].mh[j].maMH >> sv[i].mh[j].diemCC >>
			sv[i].mh[j].diemKT >> sv[i].mh[j].diemThi ;
			sv[i].mh[j].sotc = mon[sv[i].mh[j].maMH-1].sotc;
		}
	}
}


void diemTB(sinhVien sv[], int m){
	for(int i = 0; i < m; i++){
		int tongtin = 0;
		int tongdiem = 0;
		for(int j = 0; j < sv[i].somon; j++){
			sv[i].mh[j].diemTB = (sv[i].mh[j].diemCC*10 + 
			sv[i].mh[j].diemKT*20 + 
			sv[i].mh[j].diemThi*70)/100;
		//	cout << sv[i].mh[j].diemTB << endl;
			tongdiem += sv[i].mh[j].diemTB * sv[i].mh[j].sotc;
			tongtin += sv[i].mh[j].sotc;
			
		}
		//cout << tongdiem << " " << tongtin << endl;
		sv[i].diemtbsv = (float)tongdiem/tongtin;
	}
}

void insv(sinhVien sv[], int m){
	for(int i = 0;i < m; i++){
		cout << sv[i].hoTen << endl;
		cout << sv[i].diemtbsv << endl;
	}
}


int main(){
	int n, m;
	cin >> n >> m;
	monHoc mh[n]; sinhVien sv[m];
	nhapmh(mh, n);
	nhapsv(sv, mh, m);
	diemTB(sv, m);
	insv(sv, m);
	return 0;
}
