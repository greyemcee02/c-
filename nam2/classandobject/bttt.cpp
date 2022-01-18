#include<bits/stdc++.h>

using namespace std;

class Nguoi{
    protected:
        string hoten, tuoi;
};

class SinhVien : private Nguoi{
    private:
        string maSV, lop;
        float diemTB;
    public:
        float getdiemTB(){
            return diemTB;
        }
        friend istream &operator >>(istream &is, SinhVien &sv){
            is >> sv.maSV;
            is.ignore();
            getline(is, sv.hoten);
            is >> sv.tuoi >> sv.lop >> sv.diemTB;
            return is;
        }
        friend ostream &operator << (ostream &out, SinhVien sv){
            out << sv.maSV << " "
                << sv.hoten << " "
                << sv.tuoi << " "
                << sv.lop << " "
                << sv.diemTB << endl;
            return out;
        }
};

class GiangVien : private Nguoi{
    private:
        string maGV, khoa;
    public:
        friend istream &operator >>(istream &is, GiangVien &gv){
            is >> gv.maGV;
            is.ignore();
            getline(is, gv.hoten);
            is >> gv.tuoi >> gv.khoa;
            return is;
        }
        friend ostream &operator << (ostream &out, GiangVien gv){
            out << gv.maGV << " "
                << gv.hoten << " "
                << gv.tuoi << " "
                << gv.khoa << endl;
            return out;
        }
        string getkhoa(){
            return khoa;
        }
};


int main(){
    SinhVien ds[100];
    for(int i = 0; i < 2; i++)
        cin >> ds[i];
    for(int i = 0; i < 2; i++)
        if(ds[i].getdiemTB() >= 8.0)
            cout << ds[i];
    
    cout << endl;

    GiangVien dsgv[100];
    for(int i = 0; i < 3; i++)
        cin >> dsgv[i];
    for(int i = 0; i < 3; i++)
        if(dsgv[i].getkhoa() == "CNTT") 
            cout << dsgv[i];

    return 0;
}