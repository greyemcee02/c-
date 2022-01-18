#include<string>
#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;

class GiangVien{
    private:
        string hvt, bo_mon, ten;
        int stt;
    public:
        GiangVien(){
            hvt = "";
            bo_mon = "";
            stt = 0;
           
        }
        static int count;
        string gethvt(){
            return hvt;
        }
        string getten(){
			return ten;
		}
        string getbm(){
            return bo_mon;
        }
        void setname(string name){
            ten = name;
        }
        void setbm(string bm){
            bo_mon = bm;
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
    out << GV.hvt << " " << GV.bo_mon << endl;
    return out;
}

void solvename(GiangVien &gv){
    string name=gv.gethvt();
    stringstream ss(name);
    string token, tmp="";
    while (ss >> token)
    {
        tmp=token;
    }
    gv.setname(tmp);
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

void Sort(GiangVien *gv, int n){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			string str1=gv[j].getten(), str2=gv[j-1].getten();
			if(str1<str2){
				GiangVien tmp=gv[j];
				gv[j]=gv[j-1];
				gv[j-1]=tmp;
			}
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
		solvename(gv[i]);
		solvebm(gv[i]);
	} 
	Sort(gv,n);
	for(int i=0;i<n;i++){
		cout << gv[i];
	} 
    return 0;
}