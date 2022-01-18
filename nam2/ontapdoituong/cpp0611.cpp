#include<bits/stdc++.h>
#include<string>
using namespace std;

int cnt = 0;

class SinhVien{
    private:
        string name, cls, bd;
        float gpa;
        int id;
    public:
        void chuanNgay(){
            if(bd[1] == '/') bd = '0' + bd;
            if(bd[4] == '/') bd.insert(3, "0");
        }
        friend istream &operator >>(istream &in, SinhVien &sv){
            in.ignore();
            getline(in, sv.name);
            in >> sv.cls >> sv.bd >> sv.gpa;
            sv.chuanNgay();
            cnt++;
            sv.id = cnt;
            return in;
        }
        friend ostream &operator <<(ostream &out, SinhVien sv){
            out << "B20DCCN" << setw(3) << setfill('0') << sv.id;
            out << " " << sv.name << " "
                << sv.cls << " "
                << sv.bd << " "
                << fixed << setprecision(2) << sv.gpa << endl;
            return out;
        }
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}