#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
    string hoten, chucvu;
    int lcb, sonc, tienluong, tienthuong, phucap, thunhap;
};

void nhap(NhanVien &nv){
    getline(cin, nv.hoten);
    cin >> nv.lcb >> nv.sonc >> nv.chucvu;
    nv.tienluong = nv.lcb * nv.sonc;

    int nc = nv.sonc;
    if(nc >= 25) nv.tienthuong = nv.tienluong *0.2;
    else if(nc < 22) nv.tienthuong = 0;
    else nv.tienthuong = nv.tienluong * 0.1;

    if(nv.chucvu == "GD") nv.phucap = 250000;
    else if(nv.chucvu == "PGD") nv.phucap = 200000;
    else if(nv.chucvu == "TP") nv.phucap = 180000;
    else nv.phucap = 150000;
    nv.thunhap = nv.tienluong + nv.tienthuong + nv.phucap;
}

void in(NhanVien nv){
    cout << "NV01 " << nv.hoten << " "
         << nv.tienluong <<  " "
         << nv.tienthuong << " "
         << nv.phucap << " "
         << nv.thunhap;
}

int main(){
    NhanVien nv;
    nhap(nv);
    in(nv);
    return 0;
}
