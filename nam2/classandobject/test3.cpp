#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
        string maSV, hoTen, ngaySinh, lop;
        float gpa;
    public:
        friend istream& operator >>(istream &in, SinhVien &sv){
            sv.maSV = "B20DCCN001";
            getline(in, sv.hoTen);
            getline(in, sv.lop);
            getline(in, sv.ngaySinh);
            in >> sv.gpa;
            return in;
        }
        friend ostream& operator <<(ostream &out, SinhVien sv){
            if(sv.ngaySinh[1] == '/') sv.ngaySinh = "0" + sv.ngaySinh;
            if(sv.ngaySinh[4] == '/') sv.ngaySinh.insert(3,"0");
            out << sv.maSV << " " << sv.hoTen << " "
            << sv.lop << " " << sv.ngaySinh << " " 
            << fixed << setprecision(2) << sv.gpa;
            return out;
        }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
