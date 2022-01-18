#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct SinhVien{
    string name, id, cls, Birth_day;
    float gpa;
};

void chuanNgay(string &str){
    if(str[1]=='/') str="0"+str;
    if(str[4]=='/') str.insert(3,"0");
}

void nhapThongTinSV(SinhVien &a){
    a.id = "N20DCCN001";
    getline(cin,a.name);
    cin >> a.cls >> a.Birth_day >> a.gpa;
    chuanNgay(a.Birth_day);
}
void inThongTinSV(SinhVien a){
    cout << a.id << " " << a.name << " " << a.cls << " " << a.Birth_day << " ";
    cout << fixed << setprecision(2) << a.gpa ;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}