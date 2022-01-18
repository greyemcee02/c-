#include<bits/stdc++.h>
#include<string>
using namespace std;

class KhachHang{
    protected:
        string name, gd, bd, add;
    public:
        friend ifstream &operator >>(ifstream &in, KhachHang &kh){
            getline(in, kh.name);
            getline(in, kh.gd);
            getline(in, kh.bd);
            getline(in, kh.add);
            return in;
        }
        friend ostream &operator <<(ostream &out, KhachHang kh){
            out << kh.name << " "
                << kh.add ;
            return out;
        }
};

class MatHang{
    protected:
        string name, dv;
        int mua, ban;
    public:
        friend ifstream &operator >>(ifstream &in, MatHang &mh){
            in.ignore();
            getline(in, mh.name);
            in >> mh.dv >>  mh.mua >> mh.ban;
            return in;
        }
        friend ostream &operator <<(ostream &out, MatHang mh){
            out << mh.name << " "
                << mh.dv << " "
                << mh.mua << " "
                << mh.ban ;
            return out;
        }
        int getban(){
            return ban;
        }
};

class HoaDon{
    private:
        string mhd, kh, mh;
        int sl;
    public:
        friend ifstream &operator >>(ifstream &in, HoaDon &hd){
            in >> hd.kh >> hd.mh >> hd.sl;
            return in;
        }
        int getkh(){
            int rs = 0;
            for(int i = 2; i <= 4; i++)
                rs = rs*10 + (kh[i]-'0');
            return rs;
        }
        int getmh(){
            int rs = 0;
            for(int i = 2; i <= 4; i++)
                rs = rs*10 + (mh[i]-'0');
            return rs;
        }
        int getsl(){
            return sl;
        }
        // friend ostream &operator <<(ostream &out, HoaDon hd){
        //     out << hd.kh << " "
        //         << hd.mh << " "
        //         << hd.sl << endl;
        //     return out;
        // }
};

int main(){
    ifstream ifs;
    int n;
    ifs.open("KH.in");
    ifs >> n;
    ifs.ignore();
    KhachHang kh[n];
    for(int i = 0; i < n; i++)
        ifs >> kh[i];
    ifs.close();
    

    ifs.open("MH.in");
    int m;
    ifs >> m;
    MatHang mh[m];
    for(int i = 0; i < m; i++)
        ifs >> mh[i];
    ifs.close();
    
    int slhd;
    ifs.open("HD.in");
    ifs >> slhd;
    HoaDon hd[slhd];
    for(int i = 0; i < slhd; i++)
        ifs >> hd[i];
    ifs.close();
    for(int i = 0; i < slhd; i++){
        cout << "HD" << setw(3) << setfill('0') << i+1;
        cout << " ";
        int mkh = hd[i].getkh();
        int mmh = hd[i].getmh();
        cout << kh[mkh-1] << " " << mh[mmh-1] << " ";
        int sl = hd[i].getsl();
        cout << sl << " " << (long long)sl*mh[mmh-1].getban() << endl;
    }
    
    return 0;
}