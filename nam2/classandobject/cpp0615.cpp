#include<bits/stdc++.h>

using namespace std;
class NhanVien{
    private:
        string name, gender, addr, tax, birth_day, sign_day;
        int id;
    public:
        NhanVien(){
            name = ""; gender = ""; 
            addr = ""; tax = "";
            id=0;
        }
        static int  count;
        string getbirthday(){
            return birth_day;
        }
        void stdday(string &str);
        friend istream &operator>>(istream &in, NhanVien &nv);
        friend ostream &operator<<(ostream &out, NhanVien nv);
        ~NhanVien(){}
};

int NhanVien::count=1;

int compare(string s1, string s2){
    // tra ve 1 neu 1 lon tuoi hon 2 ;0 neu nguoc lai
    for(int i=6;i<10;i++){
       if(s1[i] < s2[i]) return 1; 
       else if(s1[i] > s2[i]) return 0;
    } 
    for(int i=0;i<=1;i++){
        if(s1[i] < s2[i]) return 1; 
        else if(s1[i] > s2[i]) return 0;
    } 
    for(int i=3;i<=4;i++){
        if(s1[i] < s2[i]) return 1; 
        else if(s1[i] > s2[i]) return 0;
    } 
}

void NhanVien::stdday(string &str){
    if(str[1]=='/') str="0"+str;
    if(str[4]=='/') str.insert(3,"0");
}

istream &operator>>(istream &in, NhanVien &nv){
    nv.id=nv.count;
    nv.count++;
    char tmp;
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
    out << nv.name << " " << nv.gender << " ";
    out << nv.birth_day << " " << nv.addr << " " << nv.tax << " "
    << nv.sign_day << endl;
    return out;
}

void Swap(NhanVien &nv1, NhanVien &nv2){
    NhanVien tmp = nv1;
    nv1 = nv2;
    nv2 = tmp;
}

void sapxep(NhanVien ds[], int N){
    for(int i=0;i<N;i++){
        for(int j=N-1;j>i;j--){
            string s1=ds[j].getbirthday();
            string s2=ds[j-1].getbirthday();
            if(compare(s1,s2)){
                Swap(ds[j],ds[j-1]);
            }
        }
    }
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}