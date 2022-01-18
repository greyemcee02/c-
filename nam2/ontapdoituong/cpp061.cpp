#include<bits/stdc++.h>

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
        void nhap(){
            getline(cin, name);
            cin >> cls >> bd >> gpa;
            chuanNgay();
        }
        void xuat(){   
            cout << "B20DCCN001" << " "
                << name << " "
                << cls << " "
                << bd << " "
                << fixed <<setprecision(2) << gpa;
        }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}