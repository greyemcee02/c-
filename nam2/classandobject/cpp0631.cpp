#include<bits/stdc++.h>

using namespace std;


ofstream ofs;
ifstream ifs;

int cntkh = 0;
class KhachHang{
	protected:
		string hoten, gioitinh, ngaysinh, diachi, makh;
	public:
		friend istream&operator >> (istream &in, KhachHang &kh){
			scanf("\n");
			getline(in, kh.hoten);
			getline(in, kh.gioitinh);
			getline(in, kh.ngaysinh);
			getline(in, kh.diachi);
			cntkh++;
			kh.makh += to_string(cntkh);
			while(kh.makh.length() < 3) kh.makh = '0' + kh.makh;
			kh.makh = "KH" + kh.makh;
			return in;
		}
		friend ostream &operator << (ostream &out, KhachHang kh){
			out << kh.makh << " " << kh.hoten << " "
			<< kh.gioitinh << " " << kh.ngaysinh << " " 
			<<kh.diachi << endl;
			return out; 
		}
};

vector<KhachHang> KH;
int demmh = 0;
class MatHang{
	protected:
		string tenmh, dvtinh, mamh;
		int giamua, giaban;
	public:
		friend class HoaDon;
		friend istream&operator >> (istream &in, MatHang &mh){
			in.ignore();
			getline(in, mh.tenmh);
			getline(in, mh.dvtinh);
			in >> mh.giamua >> mh.giaban;
			demmh++;
			mh.mamh += to_string(demmh);
			while(mh.mamh.length() < 3){
				mh.mamh = '0' + mh.mamh;
			}
			mh.mamh = "MH" + mh.mamh;
			return in;
		}
		friend ostream &operator << (ostream &out, MatHang mh){
			out << mh.mamh << " " << mh.tenmh << " " << mh.dvtinh 
			<< " " << mh.giamua << " " << mh.giaban << endl;
			return out; 
		}
};

class HoaDon: public KhachHang, MatHang{
	protected:
		int soluong, mahd;
	public:
		friend istream&operator >> (istream &in, HoaDon &hd){
			in >> hd.makh >> hd.mamh;
			return in;
		}
		friend ostream &operator << (ostream &out, HoaDon hd){
			out << "HD"; 
			out << setw(3) << setfill('0') << hd.mahd;
			out << " ";
			out << hd.hoten << " " << hd.diachi << " " << hd.tenmh << " "
			<< hd.soluong << " ";
			out << hd.soluong * hd.giamua << " " << hd.soluong * hd.giaban << endl;
			return out; 
		}
};

void sapxep(HoaDon dshd[], int K){
	
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    for(i=0;i<N;i++) cout << dskh[i];
    for(i=0;i<M;i++) cout << dsmh[i];
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
//2
//Nguyen Van Nam
//Nam
//12/12/1997
//Mo Lao-Ha Dong-Ha Noi
//Tran Van Binh
//Nam
//11/14/1995
//Phung Khoang-Nam Tu Liem-Ha Noi
//2
//Ao phong tre em
//Cai
//25000
//41000
//Ao khoac nam
//Cai
//240000
//515000
//3
//KH001 MH001 2
//KH001 MH002 3
//KH002 MH002 4
