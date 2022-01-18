#include<bits/stdc++.h>

using namespace std;

map<string,int> mp;
int n;
struct Car{
    string loaiXe, vr, ngay, bienso;
    int soghe;
};

int doi(int x){
    if(x == 5) return 10000;
    if(x == 7) return 15000;
    if(x == 2) return 20000;
    if(x == 29) return 50000;
    return 70000;
}

void solve(){
    Car xe;
    vector<string> vt;
    for(int i =0; i < n; i++){
        cin >> xe.bienso >> xe.loaiXe >> xe.soghe 
            >> xe.vr >> xe.ngay;
        if(xe.vr == "IN"){
            vt.push_back(xe.ngay);
            mp[xe.ngay] += doi(xe.soghe);
        } 
    }
    for(auto it : vt){
        if(mp.count(it)){
            cout << it << ": " << mp[it] << endl;
            mp.erase(it);
        }
    }
}

int main(){
    cin >> n;
    solve();
    return 0;
}