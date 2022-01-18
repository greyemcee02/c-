#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Nguoi{
	private:
		string hoten, diachi, sdt;
	public:
		
};

class KhachHang : public Nguoi{
	private:
		string makh, loaikh;
		static int mkh;
	public:
		
};

class MatHang{
	private:
		static int mmh;
		string mamh, tenhang, nhomhang;
		int giaban;
	public:		
		friend istream &operator >> (istream &in, MatHang &mh){
			in.ignore();
			getline(in, mh.tenhang);
			getline(in, mh.nhomhang);
			in >> mh.giaban;
			mh.mamh += (char)(mmh + '0');
			while(mh.mamh.length() < 3) mh.mamh = '0'+mh.mamh;
			mh.mamh = "MH"+mh.mamh;
			return in;
		}	
		friend ostream &operator << (ostream &os, MatHang mh){
			os << mh.mamh << endl;
			os << mh.tenhang << endl;
			os << mh.nhomhang << endl;
			os << mh.giaban << endl;
			return os;
		}
};



int main(){
	ofstream ofs;
	ofs.open("MH.DAT");
	int n;
	cin >> n;
	MatHang mh[n];
	for(int i = 0; i < n; i++){
		cin >> mh[i];
		ofs << mh[i];
	}
	
}
