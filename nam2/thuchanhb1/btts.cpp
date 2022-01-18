#include<bits/stdc++.h>

using namespace std;
struct sinhVien{
    string id, name;
    float toan, ly, hoa, tongdiem, diemut;
    int kv;
};
int main(){
    sinhVien sv;
    getline(cin,sv.id);
    getline(cin,sv.name);
    cin >> sv.toan >> sv.ly >> sv.hoa;
    sv.tongdiem = sv.toan*2 + sv.ly + sv.hoa;
    if(sv.id[2] == '1') sv.diemut = 0.5;
    else if(sv.id[2] == '2') sv.diemut = 1;
    else sv.diemut = 2.5;
    cout << sv.id << " " << sv.name << " " << sv.diemut << " " << sv.tongdiem << " ";
    if(sv.diemut + sv.tongdiem >= 24) cout << "TRUNG TUYEN";
    else cout << "TRUOT";
    return 0;
}
