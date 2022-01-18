#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct SinhVien{
    string Name, MaSV, Class, email, dn;
    int tt;
};

struct DoanhNghiep{
    string Name;
    int len;
    struct SinhVien sv[100];
};

void nhap(struct SinhVien &sv){
       scanf("\n");
        getline(cin,sv.MaSV);
        //cin.ignore();
        getline(cin,sv.Name);
        //cin.ignore();
        getline(cin,sv.Class);
        //cin.ignore();
        getline(cin,sv.email);
       // cin.ignore();
        getline(cin,sv.dn);
}

int searchs(struct SinhVien s, struct DoanhNghiep dn[],int sodn){
    int dd=0;
    for(int i=0;i<sodn;i++){
        if(s.dn==dn[i].Name) return i;
    } 
    return -1;
}

void SWAP(struct SinhVien &s1, struct SinhVien &s2){
    struct SinhVien tmp=s1;
    s1=s2;
    s2=tmp;
}

void sort(struct SinhVien sv[], int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(sv[j].Name < sv[j-1].Name)
                SWAP(sv[j],sv[j-1]);
        }
    }
}

void in(struct SinhVien sv[],int n){
    for(int i=0;i<n;i++){
        cout << sv[i].tt << " " <<sv[i].MaSV << " " << sv[i].Name
        << " " << sv[i].Class << " "<<sv[i].email << " " << sv[i].dn <<endl ;
        
    }
}

int main(){
    int n,sodn=0,q;
    cin >> n;
    cin.ignore();
    struct SinhVien sv;
    struct DoanhNghiep dn[100];
    nhap(sv);
    sv.tt=1;
    dn[0].Name=sv.dn;
    dn[0].len=1;
    dn[0].sv[0]=sv;
    sodn=1;
    for(int i=1;i<n;i++){
        nhap(sv);
        sv.tt=i+1;
        int sch=searchs(sv,dn,sodn);
        if(sch==-1){
            dn[sodn].Name=sv.dn;
            dn[sodn].len=1;
            dn[sodn].sv[0]=sv;
            sodn++;
        }
        else{
            dn[sch].sv[dn[sch].len]=sv;
            dn[sch].len=dn[sch].len +1;
        }
    } 
    for(int i=0;i<sodn;i++){
        sort(dn[i].sv,dn[i].len);
    }
    cin >> q;
    
    string s;
    for(int i=0;i<q;i++){
        scanf("\n");
        getline(cin,s);
        for(int j=0;j<sodn;j++) if(s==dn[j].Name)
        in(dn[j].sv,dn[j].len);
    }
    
    return 0;
}