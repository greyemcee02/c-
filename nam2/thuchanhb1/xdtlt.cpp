#include<bits/stdc++.h>

using namespace std;
vector<int> vt;
int n;

int pttho(string s){
    stringstream ss(s);
    string tmp;
    int dem = 0;
    while(ss >> tmp) dem++;
    return dem;
}

void solve(){
    string s;
    int trc = 0, count = 1, i =0;
    while(i < n){
        getline(cin, s);
        int tmp = pttho(s);
        if(trc != tmp && tmp != 8){
            if(tmp == 7){
                vt.push_back(2);
                trc = tmp;
            }
            else if(trc == 7 || trc == 0){
                vt.push_back(1);
                trc = tmp;
            }    
        }
        i++;
    }
    cout << vt.size() << endl;
    for(auto it : vt)
        cout << it << endl;

}

int main(){
    cin >> n;
    cin.ignore();
    solve();
    return 0;
}
