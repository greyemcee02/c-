#include<iostream>
#include<string>
using namespace std;

struct NhanVien{
    string Name, msThue, Dc, gt, manv, ns, nk;
};

void chuanngay(string &s){
    if(s[1]=='/') s.insert(0,"0");
    if(s[4]=='/') s.insert(3,"0");
}

void nhap(struct NhanVien &A){
	char tmp;
	cin >> tmp;
    getline(cin,A.Name);
    if(tmp!='\n') A.Name=tmp+A.Name;
    cin >> A.gt;
    cin >> A.ns;
    chuanngay(A.ns);
	cin >> tmp;
	while(tmp=='\n') cin >> tmp;
    getline(cin,A.Dc);
    A.Dc=tmp+A.Dc;
    cin >> A.msThue;
    cin >> A.nk;
    chuanngay(A.nk);
}


void inds(struct NhanVien A[], int n){
    for(int i=0;i<n;i++){
        string s="0000";
        if(i>=9) s="000";
        cout << s << i+1 <<" " << A[i].Name << " " << A[i].gt 
         << " " << A[i].ns << " "<< A[i].Dc <<" " << A[i].msThue << " " << A[i].nk << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}