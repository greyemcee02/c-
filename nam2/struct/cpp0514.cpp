#include<iostream>
#include<iomanip>
#include<sstream>
using namespace std;

struct SinhVien{
    string Name, Class, ns, MaSV;
    float GPA;
};

void chuanma(string &Ma, int i){
    Ma="B20DCCN";
    string s="";
    while(i>0){
        s=(char)((i%10)+'0')+s;
        i/=10;
    }
    while(s.length()<3) s='0'+s;
    Ma+=s;
}

void chuanns(string &ns){
    if(ns[1]=='/') ns='0'+ns;
    if(ns[4]=='/') ns.insert(3,"0");
}

void chuanhoaten(string &Name){
    string token, kq="";
    stringstream ss(Name);
    while(ss >> token){
        token[0]=toupper(token[0]);
        for(int i=1;i<token.length();i++)
        token[i]=towlower(token[i]);
        kq+=token;
        kq+=' ';
    }
    kq.erase(kq.begin()+kq.length()-1);
    Name=kq;
}

void nhap(struct SinhVien sv[], int n){
        for(int i=0;i<n;i++){
            cin.ignore();
            chuanma(sv[i].MaSV,i+1);
            getline(cin,sv[i].Name);
            chuanhoaten(sv[i].Name);
            getline(cin,sv[i].Class);
            getline(cin,sv[i].ns);
            chuanns(sv[i].ns);
            cin >> sv[i].GPA;
        }
}

void in(struct SinhVien sv[],int n){
    for(int i=0;i<n;i++){
        cout <<sv[i].MaSV << " " << sv[i].Name
        << " " << sv[i].Class << " " << sv[i].ns<<" ";
        cout << fixed << setprecision(2) << sv[i].GPA << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}