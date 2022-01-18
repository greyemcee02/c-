#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
struct SinhVien {
	string ma;
	string hoTen;
	string lop;
	float diemTHCS2;
	float diemCPP;
};

void nhap(SinhVien &sv, ifstream &filein) {
	filein.ignore();
	getline(filein, sv.ma);
	getline(filein, sv.hoTen);
	getline(filein, sv.lop);
	filein >> sv.diemTHCS2;
	filein >> sv.diemCPP;
}

void xuat(SinhVien sv, ofstream &fileout) {
	fileout << "Ma: " << sv.ma << ", Ho Ten: "<< sv.hoTen
	<< ", Lop: " << sv.lop << ", THCS2: "<< sv.diemTHCS2
	<< ", C++: " << sv.diemCPP << endl;
}

string ten(string hoTen) {
	int last_space = hoTen.rfind(" ");//Nguyen Van Truong A
	return hoTen.substr(last_space + 1, hoTen.length() - last_space - 1);
}


string ho(string hoTen) {
	int last_space = hoTen.rfind(" ");
	return hoTen.substr(0, last_space + 1);
}

int sap_xep_ho_ten(SinhVien sv1, SinhVien sv2) {
	string ten1 = ten(sv1.hoTen);
	string ten2 = ten(sv2.hoTen);
	if (ten1 != ten2) {
		return ten1 < ten2;
	}
	string ho1 = ho(sv1.hoTen);
	string ho2 = ho(sv2.hoTen);
	return ho1 < ho2;
}

int sap_xep_ten(SinhVien sv1, SinhVien sv2) {
	return sv1.hoTen < sv2.hoTen;
}


int sap_xep_diem(SinhVien sv1, SinhVien sv2) {
	return sv1.diemCPP + sv1.diemTHCS2 > sv2.diemCPP + sv2.diemTHCS2;
}

int main() {
	ifstream filein;
	filein.open("PTIT1.in");
	ofstream fileout;
	fileout.open("PTIT1.out");
	int n;
	filein >> n;
	SinhVien mang_sv[n];
	for (int i = 0; i < n; i++) {
		nhap(mang_sv[i], filein);
	}
	filein.close();
	for (int i = 0; i < n; i++) {
		if (mang_sv[i].diemCPP >= 7.0) {
			xuat(mang_sv[i], fileout);
		}
	}
	fileout << "_____________________" << endl;
	sort(mang_sv, mang_sv + n, sap_xep_ho_ten);
	
	for (int i = 0; i < n; i++) {
		xuat(mang_sv[i], fileout);
	}
	fileout << "_____________________" << endl;
	sort(mang_sv, mang_sv + n, sap_xep_diem);
	
	for (int i = 0; i < n; i++) {
		xuat(mang_sv[i], fileout);
	}
	fileout.close();
}
