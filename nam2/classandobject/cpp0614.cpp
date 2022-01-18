#include<bits/stdc++.h>
#include<string>
using namespace std;


class NhanVien{
    private:
        string name, gender, birth_day, addr, tax, sign_day;
        int id;
    public:
        NhanVien(){}
        static int count;
        friend istream &operator>>(istream &in, NhanVien &nv);
        friend ostream &operator<<(ostream &out, NhanVien nv);
        void stdday(string &str);
        ~NhanVien(){
        }
};

int NhanVien::count=1;

void NhanVien::stdday(string &str){
    if(str[1]=='/') str="0" + str;
    if(str[4]=='/') str.insert(3,"0");
}

istream &operator>>(istream &in, NhanVien &nv){
    nv.id=nv.count;
    nv.count++;
    scanf("\n");
    getline(in,nv.name);
    getline(in,nv.gender);
    getline(in,nv.birth_day);
    getline(in,nv.addr);
    getline(in,nv.tax);
    getline(in,nv.sign_day);
    nv.stdday(nv.birth_day);
    nv.stdday(nv.sign_day);
    return in;
}

ostream &operator<<(ostream &out, NhanVien nv){
    out << setw(5) << setfill('0') << nv.id << " ";
    out << nv.name << " " << nv.gender << " " << nv.birth_day 
    << " " << nv.addr << " " << nv.tax << " " ;
    out << setw(5) << setfill('0') << nv.sign_day << endl;
    return out;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}