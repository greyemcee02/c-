#include<iostream>
#include<string>

using namespace std;

class SinhVien{
    public:
        SinhVien(){
            id = ""; name = ""; cls = "";
            email = "";
        }
        friend istream &operator>>(istream &in, SinhVien &sv);
        friend ostream &operator<<(ostream &out, SinhVien sv);
        string getcls(){
            return cls;
        }
        ~SinhVien(){}
    private:
        string id, name, cls, email;
};


istream &operator>>(istream &in, SinhVien &sv){
    getline(in,sv.id);
    getline(in,sv.name);
    getline(in,sv.cls);
    getline(in,sv.email);
    return in;
}

ostream &operator<<(ostream &out, SinhVien sv){
    out << sv.id << " " << sv.name << " " 
    << sv.cls << " " << sv.email << endl;
    return out;
}

class CLS{
    private:
        string namecls;
        SinhVien *sv ;
        int count;
    public:
        CLS(){
            namecls="";
            sv=new SinhVien[70];
            count=0;
        }
        void setnew(SinhVien tmp){
            namecls=tmp.getcls();
            sv[count++]=tmp;
        }
        void setold(SinhVien tmp){
            sv[count++] = tmp;
        }
        void inds(){
            for(int i=0;i<count;i++)
                cout << sv[i] ;
        }
        string getnamecls(){
            return namecls;
        }
        ~CLS(){
        	delete[] sv;
        }
};

void inkq(CLS *ds, int len, string name){
    cout << "DANH SACH SINH VIEN LOP " << name << ":" << endl;
    for(int j=0;j<=len;j++) 
    if(name==ds[j].getnamecls()){
        ds[j].inds();
        break;
    }
}

int main(){
    SinhVien tmp ;
    int n, len=0;
    cin >> n;
    cin.ignore();
    CLS *ds = new CLS [100];
    for(int i=0;i<n;i++){
        cin >> tmp;
        int dd=0;
        for(int j=0;j<=len;j++){
            if(tmp.getcls()==ds[j].getnamecls()){
                ds[j].setold(tmp);
                dd=1;
                break;
            }
        }
        if(dd==0){
            len++;
            ds[len].setnew(tmp);
        }
    } 
    int q;
    string s;
    cin >> q;
    cin.ignore();
    for(int i=0;i<q;i++){
        getline(cin,s);
        inkq(ds,len,s);
    }
    delete[] ds;
    return 0;
}