#include<bits/stdc++.h>
#include<string>

using namespace std;

class SinhVien{
    private:
        string name, cls, bd;
        float gpa;
    public:
        void chuanNgay(){
            if(bd[1] == '/') bd = '0' + bd;
            if(bd[4] == '/') bd.insert(3, "0");
        }
        friend istream &operator >> (istream &in, SinhVien &sv){
            getline(in, sv.name);
            in >> sv.cls >> sv.bd >> sv.gpa;
            sv.chuanNgay();
            return in;
        }
        friend ostream &operator <<(ostream &out, SinhVien sv){
            out << "B20DCCN001" << " " << sv.name << " "
                << sv.cls << " "
                << sv.bd << " "
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