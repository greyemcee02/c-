#include<bits/stdc++.h>

using namespace std;

struct GiaoVien{
    string mn, ten;
    int lcb, bacluong, pc;
};

void input(GiaoVien &gv){
    cin >> gv.mn;
    cin.ignore();
    getline(cin, gv.ten);
    cin >> gv.lcb;
    gv.bacluong = (gv.mn[2] - '0') * 10 +(gv.mn[3] -'0');
    string cv = gv.mn.substr(0, 2);
    if(cv == "HT") gv.pc = 2000000;
    else if(cv == "HP") gv.pc = 900000;
    else gv.pc = 500000;
}

void output(GiaoVien gv){
    cout << gv.mn << " " 
         << gv.ten << " "
         << gv.bacluong << " "
         << gv.pc << " " << gv.pc + gv.lcb * gv.bacluong;

}

int main(){
    GiaoVien gv;
    input(gv);
    output(gv);

    return 0;
}
