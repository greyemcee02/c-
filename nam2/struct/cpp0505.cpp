#include<iostream>
#include<iomanip>
using namespace std;

struct NhanVien{
    string Name, MaNV, msThue, Dc, gt;
    int Db, Mb, Yb, Dk, Mk, Yk;
};

void nhap(struct NhanVien &A){
    A.MaNV="00001";
    getline(cin,A.Name);
    getline(cin,A.gt);
    char tmp;
    cin >> A.Db >> tmp >> A.Mb >> tmp >> A.Yb;
    cin.ignore();
    getline(cin,A.Dc);
    getline(cin,A.msThue);
    cin >> A.Dk >> tmp >> A.Mk >> tmp >> A.Yk;
}

void chuanngay(int D, int M, int Y){
    if(D>9) cout << D <<'/';
    else cout << 0 << D <<'/';
    if(M>9) cout <<M <<'/';
    else cout << 0 << M <<'/';
    cout << Y << " " ;
}

void in(struct NhanVien A){
    cout << A.MaNV << " " << A.Name << " " << A.gt << " ";
    chuanngay(A.Db,A.Mb,A.Yb);
    cout << A.Dc << " " << A.msThue <<" ";
    chuanngay(A.Dk,A.Mk,A.Yk);
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}