#include<bits/stdc++.h>

using namespace std;

class NhanVien{
	private:
		string id, hoTen, gioiTinh, 
		ngaySinh, diaChi, msThue, ngayKyHD;
	public:
		void nhap(){
			getline(cin , hoTen);
			getline(cin , gioiTinh);
			getline(cin , ngaySinh);
			getline(cin , diaChi);
			getline(cin , msThue);
			getline(cin , ngayKyHD);
			id = "00001";
		}
		void xuat(){
			cout << id << " " << hoTen << " "
			<< gioiTinh << " " << ngaySinh << " " << diaChi 
			<< " " << msThue << " " << ngayKyHD << endl;
		}
};

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
