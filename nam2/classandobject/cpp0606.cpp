#include<bits/stdc++.h>

using namespace std;
#define a() a

class NhanVien{
    public:
        NhanVien()
        :id("00001"){
            name=""; add=""; birth_day=""; 
            sign_day=""; gender=""; tax="";
        }
        void stdday(string &str);
        friend istream &operator>>(istream &in, NhanVien &nv);
        friend ostream &operator<<(ostream &out, NhanVien nv);
        ~NhanVien(){}
    private:
        string id, name, add, birth_day, sign_day, gender, tax;
};

void NhanVien::stdday(string &str){
    if(str[1]=='/') str='0'+str;
    if(str[4]=='/') str.insert(3,"0");
}

istream &operator>>(istream &in, NhanVien &nv){
    getline(in,nv.name);
    getline(in,nv.gender);
    getline(in,nv.birth_day);
    getline(in,nv.add);
    getline(in,nv.tax);
    getline(in,nv.sign_day);
    nv.stdday(nv.birth_day);
    nv.stdday(nv.sign_day);
    return in;
}

ostream &operator<<(ostream &out, NhanVien nv){
    out << nv.id << " " << nv.name << " " << nv.gender << " " << nv.birth_day
    << " " << nv.add << " " << nv.tax << " " << nv.sign_day;
    return out;
}

int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}