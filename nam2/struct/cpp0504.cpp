#include<iostream>
#include<iomanip>
using namespace std;

struct SinhVien{
    string Name, MaSV, lop;
    int D, M, Y;
    float GPA;
};

void nhap(struct SinhVien &A){
    A.MaSV="B20DCCN001";
    getline(cin,A.Name);
    getline(cin,A.lop);
    char tmp;
    cin >> A.D >> tmp >> A.M >> tmp >> A.Y;
    cin >> A.GPA;
}

void in(struct SinhVien A){
    cout << A.MaSV << " " << A.Name << " "<< A.lop << " "; 
    if(A.D>9) cout << A.D <<'/';
    else cout << 0 << A.D <<'/';
    if(A.M>9) cout <<A.M <<'/';
    else cout << 0 << A.M <<'/';
    cout << A.Y << " " << fixed << setprecision(2) << A.GPA;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}