#include<bits/stdc++.h>

using namespace std;

void sxds(int n, int m){
    vector<int> vt, kq;
    int x;
    int mn = INT_MIN, index = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        vt.push_back(x);
        if(x > mn){
            mn = x;
            index = i;
        } 
    }
    vt.insert(vt.begin()+index, m);
    for(auto it : vt){
        if(it < 0) cout << it << " ";
        else 
            kq.push_back(it);
    }
    for(auto it : kq)
        cout << it << " ";
    cout << endl;
}

int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        sxds(n, m);
    }
    return 0;
}