#include<bits/stdc++.h>

using namespace std;

#define a() a
class SinhVien{
    public:
        SinhVien(){
            lop="";
            name="";
            masv = "";
            gpa=0;
            day=0;
            month=0;
            year=0;
        }
        friend istream &operator>>(istream &in,SinhVien &sv);
        friend ostream &operator<<(ostream &out,SinhVien sv);
        ~SinhVien(){}
    private:
        string lop, name, masv;
        float gpa;
        int day, month, year;
};



istream &operator>>(istream &in,SinhVien &sv){
    char t;
    sv.masv = "B20DCCN001";
    getline(in,sv.name);
    getline(in,sv.lop);
    in >> sv.day >> t >> sv.month >> t >> sv.year;
    in >> sv.gpa;
    return in;
}

ostream &operator << (ostream &out, SinhVien sv){
    out << sv.masv << " " << sv.name << " " << sv.lop << " ";
    out << setw(2) << setfill('0') << sv.day  << '/'; 
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