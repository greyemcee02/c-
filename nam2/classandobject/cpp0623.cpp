#include<iostream>
#include<string>

using namespace std;

class SinhVien{
    private:
        string name, id, cls, email, year;
    public:
        SinhVien(){
            name = ""; id = "";
            cls = ""; email = "";
        }
        friend istream &operator>>(istream &in, SinhVien &sv);
        friend ostream &operator<<(ostream &out, SinhVien sv);
        string getyear(){
            string tmp= cls.substr(1,2);
            tmp="20"+tmp;
            return tmp;
        }
        ~SinhVien(){};
};


istream &operator>>(istream &in, SinhVien &sv){
    getline(in,sv.id);
    getline(in,sv.name);
    getline(in,sv.cls);
    getline(in,sv.email);
    sv.year="20"+sv.cls[1]+sv.cls[2];
    return in;
}

ostream &operator<<(ostream &out, SinhVien sv){
    out << sv.id << " " << sv.name << " " <<
    sv.cls << " " << sv.email << endl;
    return out;
}

void lietke(SinhVien *sv, int n){
    int q;
    cin >> q;
    string str;
    cin.ignore();
    while(q--){
        getline(cin,str);
        cout << "DANH SACH SINH VIEN KHOA " << str << ":" << endl;
        for(int i=0;i<n;i++){
            if(sv[i].getyear()==str) cout << sv[i];
        } 
    }
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    SinhVien *sv = new SinhVien[1001];
    for(int i=0;i<n;i++){
        cin >> sv[i];
    }
    lietke(sv,n);
    delete[] sv;
    return 0;
}