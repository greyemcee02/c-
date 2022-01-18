#include<iostream>
#include<string>

using namespace std;

class SinhVien{
    private:
        string id, name, cls, email, nganh;
    public:
        SinhVien(){
            id = ""; name = ""; 
            cls = ""; email = ""; nganh = "";
        }
        friend istream &operator>>(istream &in, SinhVien &sv);
        friend ostream &operator<<(ostream &out, SinhVien sv);
        string getid(){
            string id;
        }
        string getnganh(){
            return nganh;
        }
        ~SinhVien(){}
};

istream &operator>>(istream &in, SinhVien &sv){
    getline(in,sv.id);
    getline(in,sv.name);
    getline(in,sv.cls);
    getline(in,sv.email);
    string str;
    str = sv.id.substr(3,4);
    if(str=="DCKT") sv.nganh = "KE TOAN";
    else if(str=="DCVT") sv.nganh = "VIEN THONG";
    else if(str=="DCDT") sv.nganh = "DIEN TU";
    else if(str=="DCCN" && sv.cls[0]!='E') sv.nganh = "CONG NGHE THONG TIN";
    else if(str == "DCAT" && sv.cls[0]!='E') sv.nganh = "AN TOAN THONG TIN";
    return in;
}

ostream &operator<<(ostream &out, SinhVien sv){
    out << sv.id << " " << sv.name << " " << sv.cls 
    << " " << sv.email << endl;
    return out;
}

void nhap(SinhVien *sv, int n){
    for(int i=0;i<n;i++) cin >> sv[i];
}

void chuan_in_hoa(string &str){
    for(int i=0;i<str.length();i++) str[i]=toupper(str[i]);
}


void lietke(SinhVien *sv, int n){
    int q;
    string nganh;
    cin >> q;
    cin.ignore();
    while(q--){
        getline(cin,nganh);
        chuan_in_hoa(nganh);
        cout << "DANH SACH SINH VIEN NGANH " << nganh << ":" << endl; 
        for(int i=0;i<n;i++){
            if(nganh==sv[i].getnganh())
                cout << sv[i];
        }
    }
}

int main(){
    SinhVien *sv = new SinhVien [1001];
    int n;
    cin >> n;
    cin.ignore();
    nhap(sv,n);
    lietke(sv,n);
    return 0;
}