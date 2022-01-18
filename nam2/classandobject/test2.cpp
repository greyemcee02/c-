#include<bits/stdc++.h>

using namespace std;

class NhanVien{
	private:
		string id, hoTen, gioiTinh, 
		ngaySinh, diaChi, msThue, ngayKyHD;
	public:
		void nhap(){
            id = "00001";
			getline(cin, hoTen);
			getline(cin, gioiTinh);
			getline(cin, ngaySinh);
			getline(cin, diaChi);
			getline(cin, msThue);
			getline(cin, ngayKyHD);
		}
		void xuat(){
			cout << id << " " << hoTen << " "
			<< gioiTinh << " " << ngaySinh << " " << diaChi 
			<< " " << msThue << " " << ngayKyHD << endl;
		}
};

int main(){
    // NhanVien *a = new NhanVien[100];
    // for(int i = 0; i < 100; i++){
    //     a[i].nhap();
    // }
    string s = "1";
    cout << setw(2) << setfill('0') << s;
    return 0;
}