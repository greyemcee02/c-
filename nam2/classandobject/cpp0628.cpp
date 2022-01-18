#include<iostream>
#include<string>
using namespace std;

class DoanhNghiep{
    private:
        string id, name;
        int sv;
    public:
        DoanhNghiep(){}
        friend istream &operator>>(istream &in, DoanhNghiep &dn);
        friend ostream &operator<<(ostream &out, DoanhNghiep dn);
        int getsv(){
            return sv;
        }
        string getid(){
            return id;
        }
};

istream &operator>>(istream &in, DoanhNghiep &dn){
    scanf("\n");
    getline(in,dn.id);
    getline(in,dn.name);
    in >> dn.sv;
    return in;
}

ostream &operator<<(ostream &out, DoanhNghiep dn){
    out << dn.id << " " << dn.name << " " << dn.sv << endl;
    return out;
}

void Swap(DoanhNghiep &dn1, DoanhNghiep &dn2){
    DoanhNghiep tmp=dn1;
    dn1=dn2;
    dn2=tmp;
}

int kt(DoanhNghiep &dn1, DoanhNghiep &dn2){
    if(dn1.getsv()<dn2.getsv()) return 1;
    if(dn1.getsv()==dn2.getsv()){
        if(dn1.getid()>dn2.getid()) return 1;
    }
    return 0;
}

void Sort(DoanhNghiep *dn, int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(kt(dn[j-1],dn[j])) Swap(dn[j-1],dn[j]);
        }
    }
}

int main(){
    int n;
    cin >> n;
    //cin.ignore();
    DoanhNghiep *dn = new DoanhNghiep[n];
    for(int i=0;i<n;i++) cin >> dn[i];
    Sort(dn,n);
    for(int i=0;i<n;i++) cout << dn[i];
    delete[] dn;
    return 0;
}