#include<string>
#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;

class GiangVien{
    private:
        string hvt, bo_mon, vtbm;
        int stt;
    public:
        GiangVien(){
            hvt = "";
            bo_mon = "";
            stt = 0;
        }
        static int count;
        string getbm(){
            return bo_mon;
        }
        string gettenthuong(){
            string tmp="";
            for(int i=0;i<hvt.length();i++) tmp+=tolower(hvt[i]);
            return tmp;
        }
        void setbm(string bm){
            vtbm = bm;
        }
        friend istream &operator>>(istream &in, GiangVien &GV);
        friend ostream &operator<<(ostream &out, GiangVien GV);
        ~GiangVien(){}
};

int GiangVien::count=1;

istream &operator>>(istream &in, GiangVien &GV){
    getline(in,GV.hvt);
    getline(in,GV.bo_mon);
    GV.stt=GV.count;
    GV.count++;
    return in;
}

ostream &operator<<(ostream &out, GiangVien GV){
    out << "GV" ;
    out << setw(2) << setfill('0') << GV.stt << " ";
    out << GV.hvt << " " << GV.vtbm << endl;
    return out;
}

void solvebm(GiangVien &gv){
    string bm=gv.getbm();
    stringstream ss(bm);
    string token, tmp="";
    while (ss >> token)
    {
        tmp+=toupper(token[0]);
    }
    gv.setbm(tmp);
}

void lietke(GiangVien *gv, int n){
    int q;
    cin >> q;
    cin.ignore();
    string tmp;
    while(q--){
        getline(cin,tmp);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << tmp << ":" << endl;
        for(int i=0;i<tmp.length();i++) tmp[i]=tolower(tmp[i]);
        for(int i=0;i<n;i++) 
        if(gv[i].gettenthuong().find(tmp)!=string::npos) cout << gv[i];
    }
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	GiangVien *gv = new GiangVien [200];
	for(int i=0;i<n;i++){
		cin >> gv[i];
        solvebm(gv[i]);
	} 
	lietke(gv,n);
    return 0;
}