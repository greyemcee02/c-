#include<string>
#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;

class GiangVien{
    private:
        string hvt, bo_mon;
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
    out << GV.hvt << " " ;
    return out;
}

string solvebm(string bm){
    stringstream ss(bm);
    string token, tmp="";
    while (ss >> token)
    {
        tmp+=toupper(token[0]);
    }
    return tmp;
}

void lietke(GiangVien *gv, int n){
    int q;
    cin >> q;
    cin.ignore();
    string tmp;
    while(q--){
        getline(cin,tmp);
        string bm=solvebm(tmp);
        cout << "DANH SACH GIANG VIEN BO MON " << bm << ":" << endl;
        for(int i=0;i<n;i++){
            if(tmp==gv[i].getbm()) cout << gv[i] << bm << endl;
        }
    }
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	GiangVien *gv = new GiangVien [200];
	for(int i=0;i<n;i++){
		cin >> gv[i];
	} 
	lietke(gv,n);
    return 0;
}