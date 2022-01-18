#include<bits/stdc++.h>

using namespace std;

#define a() a

class SinhVien{
    public:
        SinhVien(){
            name=""; cls=""; id="";
            day=0; month=0; year=0; gpa=0;
        }
        friend istream &operator>>(istream &in, SinhVien &sv);
        friend ostream &operator<<(ostream &out, SinhVien sv);
        void stdname(){
            string str, kq;
            stringstream ss(name);
            while(ss >> str){
                str[0]=toupper(str[0]);
                for(int i=1;i<str.length();i++) str[i]=tolower(str[i]);
                kq+=str;
                kq+=' ';
            }
            kq.erase(kq.length()-1,1);
            name=kq;
        }
        ~SinhVien(){}
    private:
        string name, cls, id;
        int day, month, year;
        float gpa;
};

istream &operator>>(istream &in, SinhVien &sv){
    sv.id="B20DCCN001";
    getline(in,sv.name);
    sv.stdname();
    getline(in,sv.cls);
    char tmp;
    in >> sv.day >> tmp >> sv.month >> tmp >> sv.year >> sv.gpa;
    return in;
}

ostream &operator<<(ostream &out, SinhVien sv){
    out << sv.id << " " << sv.name << " " << sv.cls << " ";
    out << setw(2) << setfill('0') << sv.day <<'/';
    out << setw(2) << setfill('0') << sv.month << '/';
    out << sv.year << " ";
    out << fixed << setprecision(2) << sv.gpa;
    return out;
}

int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}