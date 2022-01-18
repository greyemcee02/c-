#include<bits/stdc++.h>
//#include<string>
using namespace std;
//int cntkh = 0, cntmh = 0, cnthd = 0;


class KhachHang{
	protected:
        string namekh, gt, ns, dc, idkh;
        static cnt;
    public:
        friend class HoaDon;
        friend istream &operator>>(istream &in, KhachHang &kh){
            scanf("\n");
            getline(in, kh.namekh);
            getline(in, kh.gt);
            getline(in, kh.ns);
            getline(in, kh.dc);
            string s;
            int tmp = this->cnt;
            while(tmp > 0){
            	s = (char)('0' + tmp%10) + s;
            	tmp/=10;
			}
			while(s.length() < 3) s = '0'+s;
			kh.idkh = s;
            return in;
        }
};


class MatHang{
    protected:
        int mua, ban;
        string namemh, dv, idmh;
        static cnt;
    public:
        friend class HoaDon;
        friend istream &operator>>(istream &in, MatHang &mh){
            in.ignore();
            getline(in, mh.namemh);
            in >> mh.dv >> mh.mua >> mh.ban;
            string s;
            int tmp = cnt;
            while(tmp > 0){
            	s = (char)('0' + tmp%10) + s;
            	tmp/=10;
			}
			while(s.length() < 3) s = '0'+s;
			mh.idmh = s;
            return in;
        }
};

class TongHop : protected KhachHang, MatHang{
	private:
		KhachHang *kh;
		MatHang *mh;
	public:
		TongHop(){
			kh = new KhachHang[25];
			mh = new MatHang[45];
		}
		~TongHop(){
			delete[] kh;
			delete[] mh;
		}
			
	
};

class HoaDon{
    private:
        int soluong, id;
        static cnt;
    public:
        
    	friend istream &operator>>(istream &in, HoaDon &hd){
    		in >> hd.idkh >> hd.idmh  >> hd.soluong;
    		hd.id = cnt;
			return in;
		}
//		friend ostream &operator<<(ostream &out, HoaDon hd){
//    		out << "HD" << setw(3) << setfill('0') << hd.id;
//    		out << " ";
//    		out << hd.
//		}
};

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
	 
    //for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
