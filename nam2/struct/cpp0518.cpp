#include<iostream>

using namespace std;

struct NhanVien{
    string manv, Name, gt, dc, msthue, yk, ntn;
};

void SWAP(struct NhanVien &s1, struct NhanVien &s2){
    struct NhanVien tm=s1;
    s1=s2;
    s2=tm;
}

void chuanngay(string &s1){
    if(s1[1]=='/') s1="0"+s1;
    if(s1[4]=='/') s1.insert(3,"0");
}

int ss(string s1,string s2){
    for(int i=6;i<10;i++){
        if(s1[i]-'0'<s2[i]-'0') return 1;
        if(s1[i]-'0'>s2[i]-'0') return 0;
    }
    for(int i=0;i<=1;i++){
        if(s1[i]-'0'<s2[i]-'0') return 1;
        if(s1[i]-'0'>s2[i]-'0') return 0;
    }
    for(int i=3;i<=4;i++){
        if(s1[i]-'0'<s2[i]-'0') return 1;
        if(s1[i]-'0'>s2[i]-'0') return 0;
    }
    
}

void sapxep(struct NhanVien s[] ,int n){
    for(int i=0;i<n;i++){
        string tm="";
        int x=i+1;
        while(x>0){
            tm=(char)((x%10)+'0')+tm;
            x/=10;
        }
        while(tm.length()<5) tm="0"+tm;
        s[i].manv=tm;
    }
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--)
        if(ss(s[j].ntn,s[j-1].ntn)) SWAP(s[j],s[j-1]);
    }
}

void nhap(struct NhanVien &s){
    //cin.ignore();
   scanf("\n");
    getline(cin,s.Name);
    getline(cin,s.gt);
    getline(cin,s.ntn); 
    chuanngay(s.ntn);
    getline(cin,s.dc);
    getline(cin,s.msthue);
    getline(cin,s.yk);
    chuanngay(s.yk);
}

void inds(struct NhanVien s[], int n){
    for(int i=0;i<n;i++){
        cout << s[i].manv << " " << s[i].Name << " " << s[i].gt
         << " " << s[i].ntn << " "<<s[i].dc << " " <<
         s[i].msthue << " " << s[i].yk << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}